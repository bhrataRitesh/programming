const plays = document.querySelector("#no-players");
const display1 = document.querySelector("#display1");
const display2 = document.querySelector("#display2");
const player1 = document.querySelector("#player1");
const player2 = document.querySelector("#player2");
const reset = document.querySelector("#Reset");

// if (score1.value < plays.value && score2.value < plays.value) {

// }

let score1 = 0;
let isGameOver = false;
player1.addEventListener("click", function () {
  if (!isGameOver) {
    score1 += 1;
    display1.textContent = score1;
    if (score1 === parseInt(plays.value)) {
      isGameOver = true;
      display1.classList.add("winner");
      display2.classList.add("looser");
    }
  }
});
let score2 = 0;
player2.addEventListener("click", function () {
  if (!isGameOver) {
    score2 += 1;
    display2.textContent = score2;
    if (score2 === parseInt(plays.value)) {
      isGameOver = true;
      display2.classList.add("winner");
      display1.classList.add("looser");
    }
  }
});
// plays.addEventListener("change", function () {});

reset.addEventListener("click", function () {
  isGameOver = false;
  score1 = 0;
  display1.textContent = score1;

  score2 = 0;
  display2.textContent = score2;

  display1.classList.remove("winner", "looser");
  display2.classList.remove("looser", "winner");
});

// console.log(plays.value);
