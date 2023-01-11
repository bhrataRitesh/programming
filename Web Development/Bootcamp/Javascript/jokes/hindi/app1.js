// for hindi jokes
// api key = " aaf4bf5a02fe4f1c083ba14d4b3d"
// url https://hindi-jokes-api.onrender.com/jokes?api_key=aaf4bf5a02fe4f1c083ba14d4b3d

const refresh = document.querySelector("#container");
const header = document.querySelector("#Jokeshere");
refresh.addEventListener("click", async (e) => {
  e.preventDefault();
  // alert("hello");
  // console.log("bro");
  // header.innerText = "";
  header.innerText = "";
  //   const config = { headers: { Accept: "application/json" } };
  try {
    const addJokes = await axios.get(
      "https://hindi-jokes-api.onrender.com/jokes/1?api_key=aaf4bf5a02fe4f1c083ba14d4b3d"
    );
    console.log(addJokes.data.data[0].jokeContent);
    const para = document.createElement("p");

    para.innerText = addJokes.data.data[0].jokeContent;
    header.append(para);

    // console.log(para);
  } catch (e) {
    console.log("Error!");
  }

  //   const para = document.createElement("p");
  //   //   para.append(addJokes.data.joke);
  //   para.innerText = addJokes.data.joke;
  //   console.log(para);
  //   //   header.innerText = para;
  //   header.append(para);
});
