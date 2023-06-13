
//ccontructor
function Book(name, author, type) {
    this.name = name;
    this.author = author;
    this.type = type;
}

//dislplay constructor
function Display() {


}
Display.prototype.add = function (book) {
    console.log("adding  to ui");
    tableBody = document.getElementById('tableBody');
    let uistring = ` <tr>     
                        <td>${book.name}</td>
                         <td>${book.author}</td>
                          <td>${book.type}</td>
                    </tr>`;
    tableBody.innerHTML += uistring;



}
Display.prototype.clear = function () {
    let libraryFrom = document.getElementById('libraryForm');
    libraryForm.reset();

}
Display.prototype.validate = function (book) {
    let libraryFrom = document.getElementById('libraryForm');
    if (book.name.length < 2 || book.author.length < 2) {
        return false
    }
    else {
        return true
    }

}
Display.prototype.show = function (type, displayMessage) {
    let message = document.getElementById("message");
    message.innerHTML =
        `<div class="alert alert-${type}alert-dismissible fade show" role="alert">
        <strong>Message</strong>${displayMessage} 
         <button type="button" class="close" data-dismiss="alert" aria-label="Close">
             <span aria-hidden="true">&times;</span>
         </button>
         </div>`

    setTimeout(function () {
        message.innerHTML = ''

    }, 2000);
}






//add method  to display  prototype

//add submit event listener to libary form 

let libraryFrom = document.getElementById('libraryForm');
libraryFrom.addEventListener('submit', libraryFormsubmit);


function libraryFormsubmit(e) {
    console.log('you have submit the form ');
    let name = document.getElementById('bookName').value;
    let author = document.getElementById('author').value;
    let type;

    let fiction = document.getElementById('fiction');
    let programming = document.getElementById('programming');
    let cooking = document.getElementById('cooking');

    if (fiction.checked) {
        type = fiction.value;
    }
    if (programming.checked) {
        type = programming.value;
    }
    if (cooking.checked) {
        type = cooking.value;
    }

    let book = new Book(name, author, type);
    console.log(book);

    let display = new Display();

    if (display.validate(book)) {
        display.add(book);
        display.clear();
        display.show('success', 'this book is been added');
    }
    else {
        display.show('error', 'SORRY YOU CANNOT ADD THIS BOOK');
    }
    e.preventDefault();

}



