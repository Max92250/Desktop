import React,{useState} from 'react'

import { AiOutlineMinus, AiOutlinePlus } from 'react-icons/ai';
export const Single = ({question}) => {
    
    const [showInfo, setShowInfo] = useState(false);
    return (
        <article className='question'>
        <header>
          <h4>{question.title}</h4>
          <button className='btn' onClick={() => setShowInfo(!showInfo)}>
            {showInfo ? <AiOutlineMinus /> : <AiOutlinePlus />}
          </button>
        </header>
        {showInfo && <p>{question.info}</p>}
      </article>
    )
}
