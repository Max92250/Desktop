
console.time("your code took");
console.log("hello world",9+1, "max chamling");
console.log('your code Took');
document.write("this is document write")
console.warn("this is warning");
console.error("this is error");
console.table({harry:"this",marks:"67"});
console.log({harry:"this,marks:"45"});
console.timeEnd("your code took");
//console.clear();
var number1=10;
var number2=20;
console.log(number1+number2);
/*data type in javascript*/
/*number*/
var num1=234;
var num2=345;
/*string*/
var str1="this is a string";
var str2="this is a also string";
/*objects*/
var marks={
    ravi:34,
    max:34,
    puskar:99.997,
}
console.log(marks)
//booleans
var a=true;
var b =false;
console.log(a,b); 
var  und=undefined;
console.log(und)
var n=null;
console.log(n)
/*

at a very high level ,there are two types of data type in javascript
1.primitive data type:undefined,null,number,string,boolean,Symbol
2.reference data types:arrays and objects
*/

var arr=[1,2,"max chamling",4,5]
console.log(arr[1])
console.log(arr[2])
console.log(arr[3])
console.log(arr)


/*operators in javascript*/

var a=34;
var b=242;
console.log("the vlaue of a+b is",a+b);
console.log("the value of a-b is",a-b);
console.log("the vlaue of a/b is",a/b);
console.log("the value of a*b is",a*b);
/*assignment operators*/

var c=b;
c+=2;
//c-=2;
//c*=2;
//c=c-2;
//c/=2;
console.log(c);

//comparison operator
var x=34;
var y=45;
console.log(x==y);
console.log(x>=y);
console.log(x<=y);
console.log(x>y);
console.log(x<y);

/*logical operator */
//logical and

  console.log(true&&true)
 console.log(true&&false)
 console.log(false&&true)
 console.log(false&&false)
//logical or
 console.log(true||true)
 console.log(true||false)
 console.log(false||true)
 console.log(false||false)

function avg(a,b){
  c=(a+b)/2;
  return c;
}
c1=avg(4,6);
c2=avg(14,15);
console.log(c1,c2);
/*conditional in javascript*/
var age=31;
if(age>18){
 console.log('you are not a kid');
}
else{
 console.log('you are kid');
}


age=31;
if(age>32){
  console.log("you are not a kid");
}
else if(age>26){
  console.log("he is not a child");
}
else if(age>18){
  console.log("18 bacche nahi rahe");
}
else{
  console.log("bacche rahe");
}
console.log("end of ladder");

var arr = [1, 2, 3, 4, 5, 6, 7];

//for loop
console.log(arr);
for(var i=0;i<arr.length;i++){
  if(i==2){
    continue;
  }
  console.log(arr[i]);
}

arr.forEach(function(element){
  console.log(element);
})


//while loop
let j = 0;
while(j<arr.length){
  console.log(arr[j]);
  j++;
}


  do{
    console.log(arr[j]);
    j++;
  }while (j<arr.length);



let myarr=["fan","camera",10,null,true];
//array methods
console.log(myarr.length);
//myarr.pop();
//myarr.push("harry");
//myarr.shift();
const newlen=myarr.unshift("harry")
console.log(newlen);
console.log(myarr);



//string method in javascript
let mylovelystring=("harry is a good boy good good");

console.log(mylovelystring.length)
console.log(mylovelystring.indexOf("good"))
console.log(mylovelystring.lastIndexOf("good"))

console.log(mylovelystring.slice(1,3))
d=mylovelystring.replace("harry","max")
d=d.replace("is","are")
console.log(d,mylovelystring)


let mydate=new Date();
console.log(mydate);
console.log(mydate.getTime());
console.log(mydate.getSeconds());
console.log(mydate.getDay());
console.log(mydate.getMinutes());
console.log(mydate.getHours());

//DOM manipulation
let elem=document.getElementById('click');
console.log(elem);

let elementClass=document.getElementsByClassName("contianer")
console.log(elementClass);
elementClass[0].style.background="yellow";
elementClass[0].classList.add("bg-primary")
elementClass[0].classList.add("text-success")



