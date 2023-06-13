class Car {
    constructor(name, year) {
        this.name = name;
        this.year = year;

        this.max = function (astro) {
            console.log(this.name = astro)

        }

    }
    age = function () {
        let date = new Date();
        const ret = document.querySelector(".start")
        ret.innerHTML = (date.getFullYear() - this.year);
    }
    ma(gh) {
        return this.name = gh
    }

}
Car.prototype.nam = function () {
    return this.name + " " + this.year
};


let myCar = new Car("Ford", 2014);
myCar.max('steve')
myCar.age();
let io = myCar.ma('max')
const end = document.querySelector(".end");
end.innerHTML = io;


//object 
//assign

const object1 = {
    a: 1,
    b: 2,
    c: 3
};
const object3 = {
    g: 1,
    h: 2,
    i: 3
};

const object2 = Object.assign({ a: 1, d: 5 }, object1);
const object4 = Object.assign({ g: 34, h: 25 }, object3);
console.log(object2);
console.log(object4.g, object4.h);




const url = 'https://api.github.com/users/john-smilga/followers?per_page=100'

async function fetchFollowers() {
    const max = await fetch(url)
    const data = await max.json()
    return data

}
console.log(fetchFollowers());
const ax = document.querySelector('.max')
function display(followers) {
    const newFollowers = followers
        .map((person) => {

            return `
        ${person.login}
        ${person.avatar_url}
        <br>
                `
        })
        .join('')


    ax.innerHTML = newFollowers
}
async function init() {
    const ma = await fetchFollowers()

    pages = display(ma)
}
init();



tim = ['max', 'chamling', 'rai']

const steve = tim.map(function (item) {
    id = item + 'steve';
    return id;
})
console.log(steve);

const max = [{ firstname: "Malcom", lastname: "Reynolds" },
{ firstname: "Kaylee", lastname: "Frye" },
{ firstname: "Jayne", lastname: "Cobb" }
];


console.log(max);
const jo = document.querySelector(".max");

const rai = max.map(function (item) {

    return `
        <div>${item.firstname}</div>
        `
});

console.log(rai)


const li = document.querySelectorAll(".gog");
const slide = document.querySelector(".slide")
const button = document.querySelector(".button")

li.forEach(function (ma) {
    ma.addEventListener('click', function () {


        let j = 0;
        while (j < li.length) {
            li[j++].className = 'gog';
        }
        ma.classList.add('li');




    })



})
function onlyOne(checkbox) {
    var x = document.getElementsByName("check")

    x.forEach(function (item) {




        if (item !== checkbox) {
            item.checked = false;
        }

    })

}


const po = document.querySelector('.po')
const op =document.querySelector(".op")

po.addEventListener('click', function () {
    if (document.getElementById("checkbox").checked) {
        op.style.textDecoration = "line-through"
    }
    else {
    op.style.textDecoration = "none";
    }
})


const disply = document.getElementById('display')
const input = document.querySelectorAll("input");
let value = [];
input.forEach
    ((e) => {
        e.addEventListener("click", (event) => {
            if (event.target.value === "=") {
                if (value.length != 0) {
                    let newval = eval(value);
                    disply.value = newval;
                }
            } else if (event.target.value == "c") {
                value = "";
                disply.value = value;

            } else {
                value += event.target.value;
                disply.value = value;
            }

        })
    })



rt = [2, 4, 5]

const tr = rt.map(function (oo) {
    return Math.pow(oo, 45);
})
console.log(tr);



function fruits() {
    this.name = 'fruit';
    this.season = 'Winter';
}

function apple() {
    fruits.call(this);
}

apple.prototype = Object.create(fruits.prototype);
const app = new apple();
console.log(app.name, app.season);
console.log(app.season);



const thumb = document.querySelectorAll(".thumb");
const activecase = document.querySelector(".active");
const feature =document.querySelector("#feature");

for (var i = 0; i < thumb.length; i++) {
    thumb[i].addEventListener("mouseenter", function () {
        console.log(activecase);
        if (activecase.length > 0) {
            activecase[0].classList.remove("active");
        }
        this.classList.add("active");
        feature.src = this.src;
    })

}
const sideright = document.querySelector(".sideright");
const sideleft =document.querySelector(".sideleft");



sideleft.addEventListener("click",function(){
    document.getElementById("slider").scrollLeft +=100;

    

})
sideright.addEventListener("click",function(){
    document.getElementById("slider").scrollLeft -=100;
})


 const objectpeople =[
{
    username:"max",
    password:"kingkong"
}
,
{
    username:"abhinav",
    password:"king123"
}
,
{
    username:"roshan",
    password:"puskar123"
}
]

const form =document.querySelector(".submit");
const username =document.querySelector(".username");
const password =document.querySelector(".password");
form.addEventListener("click",function(){
    for(let i=0  ;i < objectpeople.length;i++){
        if(username.value == objectpeople[i].username && password.value == objectpeople[i].password ){
    return document.location="ty.html";
    
        }
        else{
return alert("fail");
        }
        
    
    }
    

})


    




