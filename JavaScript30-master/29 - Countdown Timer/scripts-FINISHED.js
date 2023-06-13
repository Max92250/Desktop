let countdown;
const timerDisplay = document.querySelector('.display__time-left');
const endTime = document.querySelector('.display__end-time');
const buttons = document.querySelectorAll('.playerbutton');

function timer(seconds) {
  // clear any existing timers
  clearInterval(countdown);

  const now = Date.now();

  const then = now + seconds * 1000;
  

  countdown = setInterval(() => {
    const secondsLeft = Math.round((then - Date.now()) / 1000);
   const hour =Math.floor((secondsLeft/3600)%60);
    const minutes = Math.floor(secondsLeft / 60)%60;
    const remainderSeconds = secondsLeft % 60;
    const display = `${hour}:${minutes}:${remainderSeconds}`;
    document.title = display;
    timerDisplay.textContent = display;
  }, 1000);
  
  
};



buttons.forEach(function(button){
  button.addEventListener('click',function(e){
  id = e.target.dataset.skip

  const seconds = (id);
  timer(seconds);
  })
});


const customForm =document.querySelector('.submit')
customForm.addEventListener('input', function() {

  max=customForm.value;
  console.log(max);
  timer(max*60);
  this.reset();
});
