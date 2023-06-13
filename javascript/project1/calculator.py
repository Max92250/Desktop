from tkinter import *
from tkinter .messagebox import *





#some useful variable
font=('Verdana',22,'bold')

#importent function

def clear():
    ex=textField.get()
    ex=ex[0:len(ex)-1]
    textField.delete(0,END)
    textField.insert(0,ex)


def all_clear():
    textField.delete(0,END)


def click_btn_function(event):
    print("'btn clicked")
    b=event.widget
    text=b['text']
    print(text)

    if text=='x':
        textField.insert(END,"*")
        return




    if text == '=':
        try:
            ex = textField.get()
            anser = eval(ex)
            textField.delete(0, END)
            textField.insert(0, anser)
        except Exception as e:
            print("Error..",e)
            showerror("Error",e)



        return




    textField.insert(END,text)


#create a  window
window=Tk()
window.title('max chamling calculator')
window.geometry('590x615')
window.configure(bg='blue')
#var=StringVar()
#picutre label
pic=PhotoImage(file='img/pip.png')

headingLabel= Label(window,image=pic,)
#var.set("hey!how are you doing")
headingLabel.pack(side=TOP,pady=15)


#heading Label
heading=Label(window,text='My calculator',font=font)
heading.pack(side=TOP)


#textfiled
textField = Entry(window,font=font,justify=CENTER)
textField.pack(side=TOP,pady=12,fill=X,padx=10)

#buttons
buttonFrame=Frame(window)
buttonFrame.pack(side=TOP)

#adding button
temp = 1
for i in range(0,3):
    for j in range(0,3):
        btn=Button(buttonFrame,text=str(temp),font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
        btn.grid(row=i,column=j)
        temp=temp+1
        btn.bind('<Button-1>',click_btn_function)
        #btn.blinder(event,handler)

Btn1=Button(buttonFrame,text='0',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn1.grid(row=3,column=0)
Btn2=Button(buttonFrame,text='.',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn2.grid(row=3,column=1)
Btn3=Button(buttonFrame,text='=',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn3.grid(row=3,column=2)

Btn4=Button(buttonFrame,text='+',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn4.grid(row=0,column=3)

Btn5=Button(buttonFrame,text='-',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn5.grid(row=1,column=3)

Btn6=Button(buttonFrame,text='x',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn6.grid(row=2,column=3)

Btn7=Button(buttonFrame,text='/',font=font,width=5,relief='ridge',activebackground='blue',bg='pink')
Btn7.grid(row=3,column=3)

clearBtn=Button(buttonFrame,text='<--',font=font,width=11,relief='ridge',activebackground='blue',bg='pink',command=clear)
clearBtn.grid(row=4,column=0,columnspan=2)

allclearBtn=Button(buttonFrame,text='AC',font=font,width=11,relief='ridge',activebackground='blue',bg='pink',command=all_clear)
allclearBtn.grid(row=4,column=2,columnspan=2)


#binding all btn
Btn1.bind('<Button-1>',click_btn_function)
Btn2.bind('<Button-1>',click_btn_function)
Btn3.bind('<Button-1>',click_btn_function)
Btn4.bind('<Button-1>',click_btn_function)
Btn5.bind('<Button-1>',click_btn_function)
Btn6.bind('<Button-1>',click_btn_function)
Btn7.bind('<Button-1>',click_btn_function)


#clearBtn.bind('<Button-1>',click_btn_function)
#allclearBtn.bind('<Button-1>',click_btn_function)

"""
allClearBtn=Button(buttonFrame,text='AC',font=font,width=8,relief='ridge',activebackground='blue',bg='pink')
allClearBtn.grid(row=4,column=1,padx=4,pady=5,columnspan=2)
"""













window.mainloop()