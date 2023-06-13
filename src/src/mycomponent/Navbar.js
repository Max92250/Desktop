import React from 'react'
import "./Css.css"
import { Link } from 'react-router-dom';

export const Navbar = () => {

    return (
        <>
           
                <nav >

                    <h3>lkogos</h3>
                    <ul>
                        <Link to="/tours">
                            <li>about</li>
                        </Link>
                        <Link to="/list">
                            <li>shop</li>
                        </Link>
                        <Link to="/carts">
                            <li>max</li>
                        </Link>
                        <Link to="/todos/Home/Page">
                            <li>view</li>
                        </Link>




                    </ul>
                </nav>
     
           

        </>
    )
}
