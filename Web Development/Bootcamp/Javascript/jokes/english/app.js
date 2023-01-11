// fetch("https://swapi.dev/api/planets/3/")
//   .then((res) => {
//     console.log("RESOLVED!", res);
//     res.json().then((data) => console.log(data));
//   })
//   .catch((e) => {
//     console.log("ERROR!", e);
//   });

// axios
//   .get("https://swapi.dev/api/planets/3/")
//   .then((res) => {
//     console.log("RESPONSE:", res);
//   })
//   .catch((e) => {
//     console.log("ERROR!", e);
//   });

// const getStarWars = async (id) => {
//   const res = await axios.get(`https://swapi.dev/api/planets/${id}/`);
//   console.log(res.data);
// };

// getStarWars(5);

// for hindi jokes
// api key = " aaf4bf5a02fe4f1c083ba14d4b3d"
//url https://hindi-jokes-api.onrender.com/jokes?api_key=aaf4bf5a02fe4f1c083ba14d4b3d

const refresh = document.querySelector("#refresh");
const header = document.querySelector("#jokes1");
refresh.addEventListener("click", async (e) => {
  e.preventDefault();
  header.innerText = "";
  const config = { headers: { Accept: "application/json" } };
  const addJokes = await axios.get("https://icanhazdadjoke.com/", config);
  //   console.log(addJokes.data.joke);
  const para = document.createElement("p");
  //   para.append(addJokes.data.joke);
  para.innerText = addJokes.data.joke;
  console.log(para);
  //   header.innerText = para;
  header.append(para);
  console.log(addJokes);
});

// // for hindi jokes
// // api key = " aaf4bf5a02fe4f1c083ba14d4b3d"
// //url https://hindi-jokes-api.onrender.com/jokes?api_key=aaf4bf5a02fe4f1c083ba14d4b3d

// const refresh1 = document.querySelector("#refresh1");
// const header1 = document.querySelector("#jokes2");
// refresh1.addEventListener("click", async (e) => {
//   e.preventDefault();
//   alert("hello");
//   //   header1.innerText = "";
//   //   const config = { headers: { Accept: "application/json" } };
//   //   const addJokes1 = await axios.get(
//   //     "https://hindi-jokes-api.onrender.com/jokes/2?api_key=aaf4bf5a02fe4f1c083ba14d4b3d"
//   //   );

//   console.log(addJokes1.data.jokeContent);
//   //   const para = document.createElement("p");
//   //   //   para.append(addJokes.data.joke);
//   //   para.innerText = addJokes.data.joke;
//   //   console.log(para);
//   //   //   header.innerText = para;
//   //   header.append(para);
// });
