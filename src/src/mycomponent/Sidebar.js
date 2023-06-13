import React, { useState, useEffect } from 'react';
import { FiChevronRight, FiChevronLeft } from 'react-icons/fi';
import { FaQuoteRight } from 'react-icons/fa'
import './Max.css'

export const Sidebar = () => {
  const [people, setPeople] = useState([
    {
      id: 1,
      image:
        'https://res.cloudinary.com/diqqf3eq2/image/upload/v1595959131/person-2_ipcjws.jpg',
      name: 'maria ferguson',
      title: 'office manager',
      quote:
        'Fingerstache umami squid, kinfolk subway tile selvage tumblr man braid viral kombucha gentrify fanny pack raclette pok pok mustache.',
    },
    {
      id: 2,
      image:
        'https://res.cloudinary.com/diqqf3eq2/image/upload/v1586883417/person-3_ipa0mj.jpg',
      name: 'john doe',
      title: 'regular guy',
      quote:
        'Gastropub sustainable tousled prism occupy. Viral XOXO roof party brunch actually, chambray listicle microdosing put a bird on it paleo subway tile squid umami.',
    },
    {
      id: 3,
      image:
        'https://res.cloudinary.com/diqqf3eq2/image/upload/v1595959121/person-1_aufeoq.jpg',
      name: 'peter smith',
      title: 'product designer',
      quote:
        'Drinking vinegar polaroid street art echo park, actually semiotics next level butcher master cleanse hammock flexitarian ethical paleo.',
    },
    {
      id: 4,
      image:
        'https://res.cloudinary.com/diqqf3eq2/image/upload/v1586883334/person-1_rfzshl.jpg',
      name: 'susan andersen',
      title: 'the boss',
      quote:
        'Marfa af yr 3 wolf moon kogi, readymade distillery asymmetrical seitan kale chips fingerstache cloud bread mustache twee messenger bag. ',
    },
  ]);

    const [seconds, setSeconds] = useState(0);

    useEffect(() => {
      const interval = setInterval(() => {
        setSeconds( seconds=>seconds + 1);
      }, 1000);
      return () => clearInterval(interval);
    }, []);
    const [Index, setIndex] = React.useState(0);

useEffect(() => {
  const lastIndex = people.length - 1;
  if (Index < 0) {
    setIndex(lastIndex);
  }
  if (Index > lastIndex) {
    setIndex(0);
  }
  
    
  
}, [Index,setIndex])
   


    useEffect(() => {
      let slider = setInterval(() => {
        setIndex(Index + 1);
      }, 3000);
      return () => {
        clearInterval(slider);
      }

    }, [Index,setIndex]);

    return (
      <>
        <section className="max">
          <div className="rai">
            <h2>
              <span>/</span>reviews
            </h2>
          </div>
          <div className="chamling">
            {people.map((person, index) => {
            

              let position = 'nxt';
              if (index === Index) {
                position = 'activeSlide';
              }
              if (
                index === Index - 1 ||
                (index === 0 && index === people.length - 1)
              ) {
                position = 'lastSlide';
              }

              return (
                <aside className={position} >
                  <img src={person.image} alt={person.name} className="person-img" />
                  <h4>{person.name}</h4>
                  <p className="title">{person.title}</p>
                  <p className="text">{person.quote}</p>
                  <FaQuoteRight className="icon" />
                </aside>
              );
            })}
            <button className="prev" onClick={() => setIndex(Index - 1)}>
              <FiChevronLeft />
            </button>
            <button className="next" onClick={() => setIndex(Index + 1)}>
              <FiChevronRight />
            </button>
          </div>
        </section>

        <header className="App-header">
          
        {seconds} seconds have elapsed since mounting.
      </header>
      </>
    )
  }

