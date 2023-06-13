import React, { useState }  from 'react'
import Datas from './Datas';
export const Lorem = () => {
 
    const [count, setCount] = useState(0);

    const [text, setText] = useState([]);
    const handle = (e) => {
        e.preventDefault()
      
      let amount = parseInt(count);
      if (amount > 0 &&  amount < 8) {
   

      setText(Datas.slice(0, amount));
      }
    };
    return (
        <section className='section-center' style={{marginLeft:"100px"}}>
      <h3>tired of boring lorem ipsum?</h3>
      <form className='form-control ' style={{display:"flex"}}>
        <label htmlFor='amount'>paragraphs:</label>
        <input
                 className='grocery'
          type='number'
          name='amount'
          id='amount'
          value={count}
          onChange={(e) => setCount(e.target.value)}
        />
        <button className="submit-btn" onClick={handle}>generate</button>
      </form>
      <article className='lorem-text'>
        {text.map((item) => {
          return <p >{item}</p>;
        })}
      </article>
    </section>
    )
}
