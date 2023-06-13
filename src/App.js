import React from 'react';


import './App.css';
import { Todos } from "./mycomponent/Todos"

import { List } from "./mycomponent/List"
import { Tours } from "./mycomponent/Tours"
import { Error } from "./mycomponent/Error"

import {Carts} from "./cartss/Carts"

import { Navbar } from "./mycomponent/Navbar"

import { BrowserRouter as Router, Switch, Route } from 'react-router-dom';
import { Menu } from "./mycomponent/Menu"

const App = () => {


  return (

    <Router>
     
        
          <Navbar />
          <Switch>

            <Route path="/" exact component={Menu} />
            <Route path="/tours" component={Tours} />
            <Route path="/list" component={List} />
            <Route path="/todos/:name/:lname" component={Todos} />
            <Route path="/carts" component={Carts} />
            <Route  exact component={Error} />
           
           
          </Switch>

    


    






    </Router>


  );

}


export default App;
