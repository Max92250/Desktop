
//console,error,warning and more
console.time('my code took');
console.log('max chamling');
console.log(6+45);
console.log(true);
console.log([1,2,3,4]);
console.log({max:'steve ', marks:45});
console.table({max:'steve',marks:67});
let pip=({max:'steve',steve:'smith',date:'2020/8/9'});
console.table(pip);
console.warn('this is a warning');
//console.clear()
console.timeEnd('my code took');
console.assert(345<56,'age>56 is not possible')
//assert method  tests if  given expression is true or not
console.error('this is a error')


//variables:let,const,&var
var name;
 name =' max chamling';
console.log(name)

var city='delhi';
console.log(city)


const ownersname = 'steve smith';
//ownersname='max rai'
console.log(ownersname)
{
    let city = 'steve smith'
    city='biratnagar';
    console.log(city);

}
console.log(city);

const arr1=[2,4,5,6];
arr1.push(45);
console.log(arr1);
//most common programming case type
//camel cas
// kebab-case
//snake case
//pascal case

//data type in  java script(primitive and reference types):
//string
var emp = 'pratima ghale'
console.log("my string is:"+ emp);
console.log("my string is:"+ typeof emp);
//number
//boolean
let max=true;
console.log("Data type is:"+(typeof max));
console.log(max);
//Null
let nullmax=null;
console.log(typeof nullmax);
//undefined
let udefin=undefined;
console.log(typeof udefin);

//refernce datatype 
//arrays
 var myarr = [1,23,4,45,'string'];
 console.log(myarr)

 //object literial  
  let stmarks = {
      harry:0,
      aston:90,
      martin:34
  }   
  console.log(stmarks);
  console.table(stmarks); 
 
  //function
 
  function avg(a, b) {
    c = (a + b * 2) / 2;
    return c;
}
c1 = avg(4, 6);
c2 = avg(14, 15);
console.log(c1, c2);


//java script type conversion and Coercion
let ast;
ast=String(45);
console.log(ast,(typeof ast));

let date = String(new Date());
console.log(date,(typeof date));

let asd=String([2,3,5,'max chamling']);
console.log(asd.length,(typeof asd));

let y ='steve smith';
console.log(y.toString());

//true=1,false=0

let yu = Number("345");
yu= Number("45D55");
yu = Number(true);
console.log(yu)
//parseent,parsefloat
let yt=parseInt('45.67');
let op= parseFloat('78.56');
console.log(op);
console.log(yt);
//type coercion
 let sdf="max chamling ";
 let asr= "is a good boy";
 console.log(sdf + asr);

//string properties,method  and template litrial in javascript
const ttt='max chamling';
const greeting = 'steve smith';
console.log(ttt +''+greeting)

let html;
html = "<h1>this is </h>"+"<p>this is a paragraph</p>";
html = html.concat("this");
console.log(html.toUpperCase()); 
console.log(html.length);
console.log(html[1]);
console.log(html.indexOf('<'));
console.log(html.indexOf('this'));
console.log(html.indexOf('hssdfsd1'));
console.log(html.charAt(4));
console.log(html.endsWith('this'));
console.log(html.includes('h1'));
console.log(html.slice(2,6));
console.log(html.substring(1,3));
console.log(html.split(" "));
console.log(html.split(" ",3));
console.log(html.replace('this','rai'));

/*
let fruit1='orange';
let fruit2 = 'appple';
let myhtml = `hello ${'steve smith'}
             <h1>this is heading</h1>
             <p>you like ${fruit1} and ${fruit2}  
             
             
             `;

document.body.innerHTML=myhtml;

*/
//array and objects in java script
const marks=[23,45,6,7,45];
const fruits=['apple','orange','banana'];
const mixed=['str',56,[23,5]];
  
const arr=new Array(23,34,55,'max');
console.log(arr);
console.log(mixed); 
console.log(marks);
console.log(fruits[1]);
console.log(arr.length);
arr[0]='max chamling';
console.log(arr);
marks.unshift(1234);
console.log(marks);
marks.reverse();
console.log(marks);
console.log(marks.indexOf(6));

//if else and switches in java script
 const age = 56;
 //const var1=34;
 const doesdrive = true;  

  if (age==12){              // block ofcode to be executed if conditional is true

      console.log("age is not  12");
  }
  else if (age==56){       //block of code to be executed if the conditional1 is false and condition2 is true
      console.log("age is   56");

  }
  else{       // block of code to be executed if the condition1 is false and conditional2 is false
      console.log("age is not 12");
  }



 if (typeof vari !=='undefined'){
     console.log("vari is defined");
 }
 else{
     console.log("vari is not defined");
 }

 if (doesdrive && age>18){
     console.log("you can drive");
 }
 else{
     console.log("you cant drive");
 }
 console.log(age==45? 'age is  45':'age is not 45');

 //switch

 switch (age) {
     case 18:
         console.log("you are 18");
         break;
     case 38:
         console.log("you are 38");
         break;    
 
     default:
         console.log("you  are 56");
         break;
 }

//loops:for,,while,dowhile
/*
for(let i=0; i<80;i++)
{
    console.log(i)
}
*/
var tr="max chamling";
var din=tr.length;

let j=0;
while(j<din){

    console.log(j);
    
    j++;  
}


let k=0;
do{
    if(k==5){
        k+=1;
        break;
    }
    console.log(k+1);
    k+=1;
}while(k<10);
 
let atr=[2,4,5,6,7,8];

for (let i = 0; i < atr.length; i++) {
    const element = atr[i];
    console.log(element)
    
}

let obj ={
    name:"max chamling",
    age:78,
    type:"web development",
    os:"linux"


}
for(let key in obj)
{
    console.log(`the ${key} of  object is ${obj[key]}`)
}


//function and scope in java script

function greet(sname,thank='thank you guys'){
    let msg=`happy birthday ${sname} to you .${thank}`;
    return   msg;
 
}
 let val=greet(max,'thank you');
console.log(val);



const steve ={
    name:"king kong",
    game: function(sname='max chamling'){
        let asd=`my name is ${sname}.`;
        return asd;
    }
}
console.log(steve.game());

kin=['fruits','vegetables','furniture'];
kin.forEach(function(element,index,array){
    console.log(element,array,index)
});


   i =45;
console.log(i);
 
function ui(name)
{
      i= 67;
    console.log(i);
    return `this is a ${name}`;
}

console.log(ui('max chamling'),i);

/*
//dom manuppilation 
let a = window;
alert('max chamling')
a = prompt("this will destroy your computer")
a = confirm('are you sure  you one to delete this page')
console.log(a);


b=window.innerHeight;
b=window.innerWidth;
b-scrollX;
b=scrollY;
*/
b=location.toString();
//b=window.history;
console.log(b);




let l=document;
l=document.all;
//l=document.body;
//l=document.forms[0];
//l=document.link;
console.log(l);

/*
element selector in java script 
1.single element selector
2.multi element selector

*/
//single element selector
let element=document.getElementById('steve smith')
//element = element.className;
//element = element.childNodes;
//element = element.parentNode;
//element.style.color='blue';
//element.style.fontSize='20px';
//element.innerText='max chamling ';
console.log(element);



let sel = document.querySelector('#steve smith');
sel = document.querySelector('.child');
//sel =document.querySelector('b');
sel =document.querySelector('div');
sel.style.color='green';
console.log(sel);



let elems = document.getElementsByClassName('child');
elems = document.getElementsByClassName('container');
elems = document.getElementsByTagName('div');
console.log(elems)

Array.from(elems).forEach(element =>{
    console.log(element);
    element.style.color='blue';

});


//children,parent and traversing in dom 
let cont = document.querySelector('.no');
cont = document.querySelector('.container');
console.log(cont.children);

let nodeName = cont.childNodes[3].nodeName;
let nodeType = cont.childNodes[2].nodeType;
console.log(nodeType)
console.log(nodeName)


let container = document.querySelector('div.container');
console.log(container.children[1].children[0].children);
 
console.log(container.childNodes);
console.log(container.firstElementChild);
console.log(container.lastChild);
console.log(container.lastElementChild.nodeName);
console.log(container.childElementCount);
console.log(container.firstElementChild.nextElementSibling);






