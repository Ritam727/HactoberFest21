
var buttonColors = ["red", "blue", "green", "yellow"];
var gamePattern = [];
var userClickedPattern = [];
var level = 0;
var started = 0;

function playSound(name) {
  var thisAudio = new Audio("sounds/"+name+".mp3");
  thisAudio.play();
}

function startOver() {
  level = 0;
  started = 0;
  gamePattern = [];
  userClickedPattern = [];
}

function checkAnswer(currentLevel) {
  if(userClickedPattern[currentLevel] == gamePattern[currentLevel]){
    console.log("success");
    if(currentLevel == gamePattern.length-1){
      setTimeout(function(){
        nextSequence();
      }, 1000);
    }
  }
  else{
    console.log("wrong");
    playSound("wrong");
    $("body").addClass("game-over");
    $("h1").text("Game over, Press any key to restart");
    startOver();
    setTimeout(function() {
      $("body").removeClass("game-over");
    }, 200);
  }
}

function nextSequence() {
  userClickedPattern = [];
  level++;
  $("h1").text("Level "+level);
  var randomNumber = Math.floor(Math.random() * 4);
  var randomChosenColor = buttonColors[randomNumber];
  gamePattern.push(randomChosenColor);

  $("#"+randomChosenColor).fadeOut(50).fadeIn(50).fadeOut(50).fadeIn(50);
  playSound(randomChosenColor);
}

function animatePress(currentColor) {
  $("#"+currentColor).addClass("pressed");
  setTimeout(function(){
    $("#"+currentColor).removeClass("pressed");
  }, 100);
}

$(document).on("keypress", function(){
  if(started == 0){
    started = 1;
    $("h1").text("Level 0");
    nextSequence();
  }
})

$(".btn").on("click", function() {
  if(started == 1){
    var userChosenColor = this.id;
    userClickedPattern.push(userChosenColor);
    playSound(userChosenColor);
    animatePress(userChosenColor);
    checkAnswer(userClickedPattern.length-1);
  }
})
