import React from 'react'
 let footerstyle={
     position:"absolute",
     width:"100%",
    
     

 }
export const Footer = () => {
    return (
<footer className="bg-dark py-4" style={footerstyle}>
    <p>Copyright &copy;mycopylist</p>
</footer>  
  )
}
import React from 'react';


import './App.css';
import { Todos } from "./mycomponent/Todos"

import { List } from "./mycomponent/List"
import { Tours } from "./mycomponent/Tours"
import {Error} from "./mycomponent/Error"



import { Navbars } from "./mycomponent/Navbars"

import { BrowserRouter as Router, Switch, Route } from 'react-router-dom';
import { Menu } from "./mycomponent/Menu"

const App = () => {


  return (

    <Router>

      <Navbars />
      <Switch>
       
        <Route path="/" exact component={Menu} />
        <Route path="/tours" component={Tours} />
        <Route path="/list" component={List} />
        <Route path="/todos/:name/:lname" component={Todos} />
        <Route component={Error}/>
      </Switch>









    </Router>


  );

}


export default App;

