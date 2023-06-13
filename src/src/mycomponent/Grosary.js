import React, { useState, useEffect } from 'react';
import Lists from './Lists';
import Alerts from './Alerts';

export const Grosary = () => {
    const getLocalStorage = () => {
        let list = localStorage.getItem('list');
        if (list) {
          return (list = JSON.parse(localStorage.getItem('list')));
        } else {
          return [];
        }
      };
    const [name, setName] = useState('');
    const [list, setList] = useState(getLocalStorage());
    const [isEditing, setIsEditing] = useState(false);
    const [editID, setEditID] = useState(null);
    const [alert, setAlert] = useState({ show: false, msg: '', type: '' });
    const handleSubmit = (e) => {
      e.preventDefault();
      if (!name) {
        showAlert(true, 'danger', 'please enter value');
      } else if (name && isEditing) {
        setList(
          list.map((item) => {
            if (item.id === editID) {
              return { ...item, title: name };
            }
            return item;
          })
        );
       
        showAlert(true, 'success', 'value changed');
      } else {
        showAlert(true, 'success', 'item added to the list');
        let id;
        const newItem = { id:id, title: name };
  
        setList([...list, newItem]);
        setName('');
      }
    };
  
    const showAlert = (show = false, type = '', msg = '') => {
      setAlert({ show, type, msg });
    };
    const clearList = () => {
      showAlert(true, 'danger', 'empty list');
      setList([]);
    };
    const removeItem = (item) => {
      showAlert(true, 'danger', 'item removed');
      setList(list.filter((r) => r!== item));
    };
    const editItem = (id) => {
      const specificItem = list.find(function(item){
        return item.id===id;
      })
      
      setIsEditing(true);
      setEditID(id);
      
      setName(specificItem.title);

    };
    useEffect(() => {
      localStorage.setItem('list', JSON.stringify(list));
    }, [list]);
    return (
        <section className='section-center' style={{marginBottom:"10px",marginLeft:"100px"}}>
        <form className='grocery-form' onSubmit={handleSubmit}>
          {alert.show && <Alerts {...alert} removeAlert={showAlert} list={list} />}
  
          <h3>grocery bud</h3>
          <div className='form-control 'style={{display:"flex"}}>
            <input
              type='text'
              className='grocery'
              placeholder='e.g. eggs'
              value={name}
              onChange={(e) => setName(e.target.value)}
            />
            <button type='submit' className='submit-btn'>
              {isEditing ? 'edit' : 'submit'}
            </button>
          </div>
        </form>
     
          <div className='grocery-container'>
            <Lists items={list} removeItem={removeItem} editItem={editItem} />
            <button className='clear-btn' onClick={clearList}>
              clear items
            </button>
          </div>
        
      </section>
    )
}
