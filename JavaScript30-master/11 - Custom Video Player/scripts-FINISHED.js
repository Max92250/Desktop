/* Get Our Elements */
const player = document.querySelector('.player');
const video = document.querySelector('.viewer');
const progress = player.querySelector('.progress');
const progressBar = player.querySelector('.progress__filled');
const toggle = player.querySelector('.toggle');
const skipButtons = player.querySelectorAll('.playerbutton');
const ranges = player.querySelectorAll('.player__slider');

/* Build out functions */
function togglePlay() {

  if (!video.classList.contains("max")) {
    video.classList.add("max");
    video.pause();
  } else {
    video.classList.remove("max");
    video.play();
  }
}







/* Hook up the event listeners */
video.addEventListener('click', togglePlay);

toggle.addEventListener('click', togglePlay);
skipButtons.forEach(function(button){
  button.addEventListener('click', function (e) {
    const id= e.target.dataset.skip;
  
 video.currentTime += parseFloat(id)


  });

});
ranges.forEach(function(range){
 range.addEventListener('change',function(e){
   id=e.target.name;
  video[id] = this.value;
 });
});
//loop controls