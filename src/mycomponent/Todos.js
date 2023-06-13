

import React, { useEffect, useState } from 'react';
import { useHistory } from "react-router-dom";
import { useParams } from 'react-router';
import { FaEdit, FaTrash } from 'react-icons/fa';
import { Link } from 'react-router-dom';
export const Todos = () => {

  let history = useHistory();








  const [title, setTitle] = useState("")
  const [desc, setDesc] = useState("")
  const [isEditing, setIsEditing] = useState(false);
  const [editID, setEditID] = useState(null);
  const onChange = (e) => {
    setDesc(e.target.value)
  }
  let inittodo;
  if (localStorage.getItem("todos") === null) {
    inittodo = []
  }
  else {
    inittodo = JSON.parse(localStorage.getItem("todos"))
  }


  const on = (todo) => {
    setTodos(todos.filter((e) => {
      if (e != todo) {
        return true
      }
    }))
    console.log("deletes", todo)

  }


  const [todos, setTodos] = useState(inittodo)

  useEffect(() => {
    localStorage.setItem("todos", JSON.stringify(inittodo))
  }, [todos]);



  const submit = (e) => {
    e.preventDefault();
    if (title === "" || desc === "") {
      alert("Email and password should not been blank")
    } else if (isEditing) {
      setTodos(
        todos.map((item) => {
          if (item.id === editID) {
            return { ...item, title: title, desc: desc }
          }
          return item;
        })
      );
    } else {


      let id;
      const mytodo = {
        id: id,
        title: title,
        desc: desc,
      }

      setTodos([...todos, mytodo])
      setTitle('');
      setDesc('');

      console.log(mytodo);




    }

  }
  const [pop, setPop] = useState()
  const max = [];

  function handleClick() {
    if (title === "" || desc === "") {


      max.push(" !!Email  and Password should not been blank")
      setPop([...max, pop])


    }
    else {
      history.push("/");
    }


  }
  const editItem = (id) => {
    const specificItem = todos.find((item) => item.id === id);
    setIsEditing(true);
    setEditID(id);
    setTitle(specificItem.title);
    setDesc(specificItem.desc)
  };


  const [values, setValues] = React.useState({

    showPassword: false,
  });

  const handleClickShowPassword = () => {
    setValues({ ...values, showPassword: !values.showPassword });
  };

 


  const { name, lname } = useParams();
  const[prop,classname]=useState(true);

  return (

    <>
      <div
        style={{
          marginLeft: "30%",
          marginTop: '100px'
        }}
      >




      </div>

      <div className="io" className={prop ? "joj":"kok"} >

        <h3>login to {name} {lname} </h3>
        <div className="form-group">
          <label htmlFor="title">Email address</label>
          <input type="text" className="form-control" value={title} onChange={(e) => { setTitle(e.target.value) }} id="desc" placeholder="address" />
        </div>
        <div style={{ color: 'red', fontSize: '15px' }}>{pop}</div>
        
        <div className="form-group" >
          <label htmlFor="desc">Password</label>
          <input type="text" className="form-control" id="desc" value={desc} onChange={onChange}  placeholder="Password" type={values.showPassword ? "text" : "password"} />
          <button position="end"
            onClick={handleClickShowPassword}
          
            style={{outline:'none',background:"green",border:"none",marginTop:"4px",padding:"2px 5px",color:"#fff"}}
          >

            {values.showPassword ? 'hide' : 'show'}

          </button>
         
        </div>
        <button type="submit" className="btn btn-success" onClick={handleClick} >Login</button>
        <button className="btn btn-success" style={{marginLeft:"5px"}}  onClick={()=>classname(!prop)}>{prop ? "change":"max"}</button>






      </div>

      <div className="io">
        <form className="my-4" >
          <h3>Add a todo</h3>
          <div className="form-group">
            <label htmlFor="title">Topics</label>
            <input type="text" value={title} onChange={(e) => { setTitle(e.target.value) }} className="form-control" id="title" aria-describedby="emailHelp" placeholder="Enter email" />

          </div>
          <div className="form-group">
            <label htmlFor="desc">Notes</label>
            <input type="text" value={desc} onChange={onChange} className="form-control" id="desc" placeholder="Password" />
          </div>



          <button type="submit" className="btn btn-success" onClick={submit} >{isEditing ? 'edit' : 'submit'}</button>

          <button type="submit" className="btn btn-success" style={{ marginLeft: "20px" }} onclick={() => todos([])} >delete</button>
        </form>



        <div >

          {todos.map((todo) => {
            let { title, desc, id } = todo
            return (
              <>

                <div key={id}>
                  <h4>{title}</h4>
                  <h4>{desc}</h4>
                  <button type="delete" className="btn btn-warning" onClick={() => { on(todo) }}>Delete </button>
                  <button
                    type='button'
                    className='edit-btn'
                    onClick={() => editItem(id)}
                  >   <FaEdit /></button>
                </div>

              </>
            )

          })}






        </div>
      </div>







    </>
  )
}



