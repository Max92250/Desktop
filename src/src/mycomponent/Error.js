import React from 'react'

import { Link } from 'react-router-dom';

export const Error = () => {
    return (
        <div style={{ margin:'0 auto',width:'45%',position:'relative',top:'20rem' }}>
            <h1>404 - Not Found!</h1>
            <Link to="/">
                <div style={{ color: 'red', fontSize: '40px' }}>
                    Go home
                </div>
            </Link>
        </div>
    )
}
