
/*
//creating ,removing,replacing elements
//ADD a class  name to the li element
let element = document.createElement('li');
let text = document.createTextNode('I AM A MAX CHAMLING');
element.appendChild(text);
console.log(element);

//add a class name to the li element
element.className = 'childul';
element.id = 'createdli';
element.setAttribute('title', 'mytitle');
//element.innerHTML='<b>my name is max chamling</b> ';
//element.innerHTML='<p>my steve  name is max chamling</p> ';

let ul = document.querySelector('ul.this');
ul.append(element);
console.log(ul);
console.log(element)


let elem2 = document.createElement('h2');
elem2.id = 'elem2';
elem2.className = 'elem2';
let tnode = document.createTextNode('this is a text node');
elem2.appendChild(tnode);
//element.replaceWith(elem2);

let myul = document.getElementById('myul');
myul.replaceChild(element, document.getElementById('fui'));
myul.removeChild(document.getElementById('lui'));

let pr = elem2.hasAttribute('class');
elem2.removeAttribute('id');
elem2.setAttribute('title', 'max chamling');
console.log(elem2, pr);


//event and event object in java script
document.getElementById('heading').addEventListener
    ('mouseover', function (e) {
        let variable;

        console.log('you have clicked the heading');
        //  location.href='//youtube.com'
        variable = e.target;
        variable = e.target.className;
        variable = e.target.classList;
        variable = Array.from(e.target.classList);
        variable = e.offsetX;
        variable = e.offsetY;
        variable = e.clientX;
        console.log(variable);
    });

//more on javascript
let btn = document.getElementById('btn');
btn.addEventListener('mouseenter', func1);
btn.addEventListener('mouseleave', func2);
btn.addEventListener('mousedown', func3);
function func1(e) {
    btn.style.backgroundColor = 'blue'
    console.log("thanks", e);
    e.preventDefault();
}
function func2(e) {
    btn.style.backgroundColor = 'white'
    console.log("thanks its a double click", e);

    e.preventDefault();
}
function func3(e) {

    console.log("thanks its a mouse down", e);
    e.preventDefault();
}

document.querySelector('.no').addEventListener('mouseenter', function () {
    document.body.style.backgroundColor = 'red'
    console.log("you entered no");
})
document.querySelector('.no').addEventListener('mouseleave', function () {
    document.body.style.backgroundColor = 'blue'
    console.log("you exited no");
})

document.querySelector('.no').addEventListener('mousemove', function (e) {
    console.log(e.offsetX, e.offsetY);
    document.body.style.backgroundColor = 'red'
    console.log("you triggered moouse move event");
})

document.querySelector('.container').addEventListener('mousemove', function (e) {
    console.log(e.offsetX, e.offsetY);
    document.body.style.backgroundColor = `rgb(${e.offsetX},${e.offsetX},${e.offsetY})`;
    console.log("you triggered moouse move event");
})

//smart  page crawler in java script


let str = 'python';
let links = document.links;
console.log(links);
let href;
Array.from(links).forEach(function (element) {
    href = element.href;

        console.log(href);

});

//local&session storage in java script
localStorage.setItem('name','max chamling')
localStorage.setItem('fname','steve smith')
//clear the entire local storage
//localStorage.clear();
//remove the item
//localStorage.removeItem('name');


let name = localStorage.getItem('name')
console.log(name);

let impArray=['steve','royal roice','bugatti','lambogrini'];

localStorage.setItem('Carname',JSON.stringify(impArray));

let item =localStorage.getItem('name');
item=JSON.parse(localStorage.getItem('Carname'));
console.log(item)

sessionStorage.setItem('sesionname','max');
sessionStorage.setItem('sesionname2','max rai');
sessionStorage.setItem('sesionname3','steve smith');
sessionStorage.setItem('Carname',JSON.stringify(impArray));


//math object in javascript
//let x = Math;
//let x= Math.PI;
//let x=Math.round(23.5);
//let x=Math.ceil(23.3);
//let x = Math.floor(3.9);
//let x = Math.floor(-5.6);
//let x= Math.sqrt(81);
//let x  = Math.pow(2,6);
//let x = Math.min(2,4,5,6);
//let x= Math.max(34,56,23);
//let x =100*Math.random();
let x = Math.ceil(50+(100-50)*Math.random());

console.log(x);

//date object :date andv time in java script
let date= new Date();
//console.log(date);
let  otherdate=new Date('8-4-2003 04:03:23')
console.log(otherdate);
let  a ;
a = otherdate.getDay();
a = otherdate.getDate();
a = otherdate.getMinutes();
a = otherdate.getMonth();
a = otherdate.getTimezoneOffset();
a=otherdate.setDate(23);
a=otherdate.setHours(4);
console.log(otherdate);

const max= new Date('January 12,2020 07:05:34');
console.log(max.getUTCDate());//it changes the day of the month of a given date iinstance,based on utc time
max.setUTCDate(14);
console.log(max.getUTCDate());


/*
let val = localStorage.getItem('text');
let text;
if(val==null){
    text=document.createTextNode('this is my element');
}
else{
    text = document.createTextNode(val);

}


//creating an editable div exercise
let divelem = document.createElement('div');
let val = localStorage.getItem('text');
let text;
if(val==null){
     text = document.createTextNode('this is my element.click to edit it');
}
else{
    text = document.createTextNode(val);

}

divelem.appendChild(text);


divelem.setAttribute('style', 'border:2px solid black;width:154px;margin:34px;padding:23px;')
divelem.setAttribute('id', 'elem');
divelem.setAttribute('class', 'elem');

let container = document.querySelector('.container');
let first = document.getElementById('myfirst');
//insert the element before element with id first
container.insertBefore(divelem, first)
console.log(divelem, container, first);
//add event listener to the divelem

divelem.addEventListener('click', function () {
    let noTextarea = document.getElementsByClassName('textarea').length;
    if (noTextarea == 0) {
        let html = elem.innerHTML;
        divelem.innerHTML = `<textarea class=" textarea form-control"  id="textarea" rows="3">${html}</textarea>`;
    }
    //listen for the bur event on text area
    let textarea= document.getElementById('textarea');
    textarea.addEventListener('blur',function(){
        elem.innerHTML = textarea.value;
        localStorage.setItem('text',textarea.value);
    })
})
/*
//object literial,constructor and object oriented in java script
//object literial for creating objects
let car={
    name:'max chamling',
    topspeed:89,
    run:function(){
        console.log("car is running")
    }
}
console.log(car);
//Creating a constructor for cars
function generalcar(givenname,giventopspeed){
    this.name=givenname;
    this.topspeed=giventopspeed;
    this.run = function(){
        console.log(`${this.name} is running`);
    }
    this.analysis = function(){
        console.log(`this car is slower by ${200-this.topspeed} than bugati`)

    }
}
 max= new generalcar('max chamling',56);
console.log(max);
*/

//object prototype in java script 
//all the javascript object inherit properties and method from a prototype
/*
let obj = {
    name: "harry",
    channel: "max with java script"

}

function Obj(givenName) {
    this.name = givenName

}
Obj.prototype.getName = function () {
    return this.name;
}
Obj.prototype.setName = function (newName) {
    return this.name = newName;
}

let obj2 = new Obj("max chamling");
console.log(obj2);

//proto type inheritance in java script

const proto = {
    slogan: function () {
        return `this company is the best`;
    },
    changeName: function (newName) {
        this.name = newName
    }
}
let max = Object.create(proto);
max.name = "steve";
max.role = "cricketer";
max.changeName("mac")
console.log(max);


//class inheritance in   java script
class rai {
    constructor(givenname, givenexperiance, givendivision) {
        this.name = givenname;
        this.experiance = givenexperiance;
        this.division = givendivision;
    }

    slogan() {
        return ` i am ${this.name} best in the world`

    }
    joinigyear() {
        return 2020 - this.experiance;
    }
    static add(a, b) {
        return a + b;
    }
}
steve = new rai("max chamling", 2, "a+");
console.log(rai.add(45, 56));

//inheritance in java script
class programmer extends rai {
    constructor(givenname, givenexperiance, givendivision, language, github) {
        super(givenname, givenexperiance, givendivision);
        this.language = language;
        this.github = github;
    }

    favoritelanguage() {
        if (this.language == 'python') {
            return 'python';


        }
        else {
            return 'javascript'
        }
    }
    static add(a,b) {
        return a + b;
    }
}
yop = new programmer("steve smith",3,"A","nepali","sd")
console.log(yop);
console.log(yop.favoritelanguage());
console.log(programmer.add(2,5));
*/


//ajax in java script
//ajax helps in fetching data asynchronously without interfering with the existing page.
//no page reload/refresh
//mordern website use json intead or xml for data tranfer
//better use experiance
//saves network bandwith
//very interactive

//how it works?
//ajax use xmlhttprequest object (also called xhr object) to achieve this
//data can be transferred in any format and protocol (not always http necessary)
/*
let fetchbtn = document.getElementById('fetchbtn');
fetchbtn.addEventListener('click', buttonclickhandler)

function buttonclickhandler() {
    console.log("you have clickd");
    //instantiate an xhr object
    const xhr = new XMLHttpRequest();
    // OPEN THE OBJECT
    // xhr.open('GET','max.txt',true);
    xhr.open('POST', 'http://dummy.restapiexample.com/api/v1/create', true);
    xhr.getResponseHeader('Content-type', 'application/json');
    //
    //what to do an progress (option1)
    xhr.onprogress = function () {
        console.log("on progress");
    }
    //  xhr.onreadystatechange = function () {
    //     console.log('ready state is', xhr.readyState)
    //  }
    xhr.onload = function () {
        if (this.status === 200) {
            console.log(this.responseText)
        }
        else {
            console.log("some error occured")
        }
    }
    params = `{"name":"test34","salary":"123","age":"3"}`;
    xhr.send(params);

    console.log("we are done")

}

let popBtn = document.getElementById('popHandler');
popBtn.addEventListener('mousemove', popHandler)


function popHandler() {
    console.log("you have clickd the popHandler");
    //instantiate an xhr object
    const xhr = new XMLHttpRequest();
    // OPEN THE OBJECT
    xhr.open('GET', 'note.html', true)

    //what to do an progress (option1)
    xhr.onprogress = function () {
        console.log("on progress");
    }
    //  xhr.onreadystatechange = function () {
    //     console.log('ready state is', xhr.readyState)
    //  }
    xhr.onload = function () {
        if (this.status === 200) {
            

          document.getElementById('popHandler').innerHTML=this.responseText;
        }
        else {
            console.log("some error occured")
        }
    }

    xhr.send();

    console.log("we are done")

}


//libary implementation 
class Library {
    constructor(bookList) {
        this.bookList = bookList;
        this.issuedBooks = {};

    }
    getBookList() {
        this.bookList.forEach(element => {
            console.log(element);

        });
    }
    issueBook(bookname, user) {
        this.issuedBooks[bookname] = user;
    }
    returnBook(bookname) {
        delete this.issuedBooks[bookname];
    }



}


let btn = document.getElementById('max');
btn.addEventListener('click', func1);

function func1(e) {

    $("h2").hide(1000);

}

$(document).ready(function () {
    $("#flip").click(function () {
        $("#panel").slideToggle("slow");
    });
});
*/

///call back function
const students = [
    {name:"max",subject:"javascript"},
    {name:"steve",subject:"javascript"}


]

function enrollStudent(student,callback){
    setTimeout(function(){
        students.push(student);
        callback();

    },3000); 
}
function getStudents(){
     
    setTimeout(function(){
        let str = "";
        students.forEach(function(student){
            str += `<li> ${student.name}</li>`

        });
        document.getElementById('students').innerHTML = str;

    },1000);

}
let newStudent = {name:"asto",subject:"python"}
enrollStudent(newStudent,getStudents);
