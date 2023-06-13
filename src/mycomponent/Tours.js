import React, { useEffect, useState } from 'react';
import { Review } from "./Review"
import { Loading } from "./Loading"


export const Tours = () => {
  const [readMore, setReadMore] = useState(false);
  const [loading, setLoading] = useState(true)
  const [tours, setTours] = useState([])
  const [value, setValu] = useState("");


  const removeTour = (tour) => {
    setTours(tours.filter((e) => {
      return e != tour;
    }))
  }

  const IMGPATH = "https://image.tmdb.org/t/p/w1280";
  const fetchTours = async () => {

    setLoading(true)
    try {
      const url = 'https://api.themoviedb.org/3/discover/movie?sort_by=popularity.desc&api_key=04c35731a5ee918f014970082a0088b1&page=1 '
      const response = await fetch(url)
      const tours = await response.json()
      setTours(tours.results)
      setLoading(false)
    } catch (error) {
      setLoading(true)
    }



  }
  useEffect(() => {
    fetchTours()
  }, [])
  if (loading) {
    return (
      <main>
        <Loading />
      </main>
    )
  }
  if (tours.length === 0) {
    return (

      <div className='title'>
        <h2>no tours left</h2>
        <button className='btn' onClick={() => fetchTours()}>
          refresh
        </button>
      </div>

    )
  }

  const oncharge = (e) => {
    setValu(e.target.value)
   


  }
  return (
    <>
      <div style={{width:"500px",margin:"0 auto"}}>
        <input style={{ marginTop: "100px" }} type="text" className="form-control" onChange={oncharge} id="desc" placeholder="address" />
      </div>
      <div className="title">
        <h2>our tours</h2>
        <div className="underline"></div>
      </div>

      <div style={{ display: "grid", gridTemplateColumns: "1fr 1fr", rowGap: "2rem", columnGap: "2rem", width: "90%", margin: "0 auto", }}>

        {tours.filter((tour)=>{
          if(value==""){
            return tour;
          }else if(tour.original_title.toLocaleLowerCase().includes(value.toLocaleLowerCase())){
            return tour;
          }
          
          
        }).map((tour, img) => {
          return (
            <>
              <article className="single-tour">
                <img src={IMGPATH + tour.backdrop_path} />
                <footer>
                  <div className="tour-info">
                    <h4>{tour.original_title}</h4>
                    <h4 className="tour-price">${tour.id}</h4>
                  </div>
                  <p>
                    {readMore ? tour.overview : `${tour.overview.substring(0, 100)}...`}
                    <button onClick={() => setReadMore(!readMore)}>
                      {readMore ? 'show less' : '  read more'}
                    </button>
                  </p>
                  <button className="delete-btn" onClick={() => removeTour(tour)}>
                    not interested
                  </button>
                </footer>
              </article>
            </>
          )
        })}


      </div>

      <Review />
    </>
  )
}
