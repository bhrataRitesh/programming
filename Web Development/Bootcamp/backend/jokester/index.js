const jokes = require("give-me-a-joke");
jokes.getRandomJokeOfTheDay((joke) => {
  console.log(joke);
});
