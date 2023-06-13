console.log('welcome to my website');

/*

let i = 0;
let target = document.getElementById("demo");
let text = target.innerHTML;
target.innerHTML = ' ';
let speed = 80;

typeWriter();
function typeWriter() {
    if (i < text.length) {
        target.innerHTML += text.charAt(i);
        i++;
        setTimeout(typeWriter, speed);
    }
}
*/

//if user add a note it to the localstorage
let addBtn = document.getElementById('addBtn');
addBtn.addEventListener("click", function (e) {
    let addTxt = document.getElementById("addTxt");
    let addTitle = document.getElementById("addTitle");
    let notes = localStorage.getItem("notes");
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }
    let myobj = {
        title:addTitle.value,
        text:addTxt.value
    }
    notesObj.push(myobj);
    localStorage.setItem("notes", JSON.stringify(notesObj));
    addTxt.value = "";
    addTitle.value = "";
    console.log(notesObj);
    showNotes();
})

//function to show element from local storage
function showNotes() {
    let notes = localStorage.getItem("notes");
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }
    let html = "";
    notesObj.forEach(function (element, index) {
        html += `
        <div class="noteCard my-2 mx-4 card" style="width: 30rem;" ">

          <div class="card-body" style="width:33rem;color:#663399;border: 2px solid#4169E1;background-color: burlywood;">
             <h6 class="card-title" style="text-align: center;" >${element.title}</h6>
             <p class="card-text" style="color:#663399;background-color: burlywood; font-family: 'Inconsolata', monospace;">${element.text}</p>
             <button id="${index}" onclick="deleteNote()" class="btn btn-primary">Delete Notes</button>
           </div>

        </div>`;




    });
    let notesElm = document.getElementById('notes');
    if (notesObj.length != 0) {
        notesElm.innerHTML = html;
    }
    else {
        notesElm.innerHTML = `Nothing to show! "Add a Notes"section above to add a notes.`;
    }
}

//function to delete a note
function deleteNote() {

      let max=this.id;

    let notes = localStorage.getItem("notes");
    if (notes == null) {
        notesObj = [];
    }
    else {
        notesObj = JSON.parse(notes);
    }

    notesObj.splice(max,1);
    localStorage.setItem("notes", JSON.stringify(notesObj));
    showNotes();



}

let search = document.getElementById('searchTxt');
search.addEventListener("input", function () {
    let inputVal = search.value;
    console.log('Input event fired', inputVal); 
    let noteCards = document.getElementsByClassName('noteCard');
    Array.from(noteCards).forEach(function (element) {
        let cardTxt = element.getElementsByTagName("p")[0].innerText;
       
        if(cardTxt.includes(inputVal)){
           element.style.display="block";

        }
       else{
            element.style.display="none";
        }
       // console.log(cardTxt);

 
    })


})






