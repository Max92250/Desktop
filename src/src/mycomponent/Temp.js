
import './Rai.css'
import { useState,useEffect } from 'react/cjs/react.development'
import {Sycomponent} from "./Sycomponent";

export const Temp = () => {
    const [city, setCIty] = useState("null")
    const [search, setSearch] = useState("nepal")

useEffect(() => {
    const fetchApi = async () => {

        const url = `https://api.openweathermap.org/data/2.5/weather?q=${search}&units=metric&appid=f55f68e2256ecb8e2bcb03bc507edef9`
        const response = await fetch(url)
        const rejson = await response.json();
        setCIty(rejson.main)
        console.log(url);
    }
    fetchApi();


}, [search])
      




    return (
        <>

            <div className="box">
                <div className="inputData">
                    <input type="search" className="inputField" onChange={(event) => { setSearch(event.target.value) }} />
                </div>

                {!city ? (
                    <p style={{color:'black'}}>no data found</p>
                ):(
                    <div>
                    <div className="info">
                    <h2 className="info"><i class="fa fa-street-view ico" ></i>{search}</h2>
                </div>
                <h1 className="temp">
                    {city.temp}°C
                </h1>
                <h3 className="temps"  >feels_like<p style={{fontSize:'12px'}}>{city.feels_like}°C</p> temp_min{city.temp_min}0°C <br/>tem_max{city.temp_max}</h3>
                </div>
                )}
                
               
            </div>
            <Sycomponent/>
        </>
    )
}
