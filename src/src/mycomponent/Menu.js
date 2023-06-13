import React, { useState } from 'react'
import items from './Data';
import { Tabs } from './Tabs'
import { Sidebar } from './Sidebar';
import { Lorem } from './Lorem'
import { useLocation } from "react-router-dom"
import { Grosary } from './Grosary';

export const Menu = () => {

  const location = useLocation();
  console.log(location);
  const allCategories = ['all', ...new Set(items.map(function (item) {
    return item.category;
  }))];
  console.log(allCategories);
  const [categories, setCategories] = useState(allCategories);

  const filterItems = (category) => {

    const newItems = items.filter(function (item) {


      return item.category === category
    });
    setMenuItems(newItems);

    if (category === 'all') {
      setMenuItems(items);
      return;
    }

  };
  const [menuItems, setMenuItems] = useState(items)
  const [values, setValue] = useState("");

  const oncharge = (e) => {
    setValue(e.target.value)
    const you = items.filter((menuItems) => {
      return menuItems.category.toLowerCase().includes(values.toLowerCase())

    })
    setMenuItems(you)


  }
  
  function hasNetwork(online) {
    const element = document.querySelector(".status");

    if (online) {
      element.innerText = "online"
    }
    else {
      element.innerText = "offline"
    }
  }
  window.addEventListener("load",(event)=>{
    const element =document.querySelector(".status");
    element.textContent =navigator.onLine ?"online":"offline";
  })
  window.addEventListener("offline",(event)=>{
    const element=document.querySelector(".status");
    element.textContent="offline"
  })
  window.addEventListener("online",(event)=>{
    const element=document.querySelector(".status");
    element.textContent="online"
  })

  return (
    <>
      <div >
       
        <section className="menu section" style={{ background: "pink" }}>
        <div className="status" style={{color:"red"}}>online</div>
          <div className="title">
            <h2>our menu</h2>
            <div className="underline"></div>
          </div>
          <div className="contain">
            {categories.map((category) => {
              return (
                <button
                  type="button"
                  className="filter-btn"

                  onClick={() => filterItems(category)}>
                  {category}


                </button>
              );
            })}
            <input type="text" className="form-control" onChange={oncharge} id="desc" placeholder="address" />
          </div>
          <div className='section-center'>
            {menuItems.map((menuItem) => {
              const { id, title, img, desc, price } = menuItem;
              return (
                <article key={id} className='menu-item'>
                  <img src={img} alt={title} className='photo' />
                  <div className='item-info'>
                    <header>
                      <h4>{title}</h4>
                      <h4 className='price'>${price}</h4>
                    </header>
                    <p className='item-text'>{desc}</p>
                  </div>
                </article>
              );
            })}
          </div>

        </section>
      </div>

      <Sidebar />
      <Grosary />
      <Lorem />
      <Tabs />
    </>
  )
}
