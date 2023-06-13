import React from 'react'

export const TodoItem = ({todo,onDelete}) => {
    
    return (
        
        <>
              <h4>{todo.id}</h4>
            <h4>{todo.title}</h4>
            <h4>{todo.desc}</h4>
            <button  onClick={()=>{onDelete(todo)}}>Delete</button>
        </>
    )
}
