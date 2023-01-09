// https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/1.png
const container = document.querySelector("#container");

const source =
  "https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/";
for (let i = 1; i <= 151; i++) {
  const pokemon = document.createElement("div");
  const count = document.createElement("span");
  pokemon.classList;
  count.innerText = `#${i}`;
  const newImg = document.createElement("img");
  newImg.src = `${source}${i}.png`;

  pokemon.appendChild(newImg);
  pokemon.appendChild(count);
  container.appendChild(pokemon);
}
