// import axios from "axios";

// const city = prompt("Enter your city name:");
var cityName = document.querySelector(".city-name");
var cityNameBro = "";
cityName.addEventListener("change", (event) => {
  // console.log(event.target.value);
  cityNameBro = event.target.value;
});

console.log(cityName);
const cloud_Pact = document.querySelector("#cloud_pact");
const search = document.querySelector("#search");
search.addEventListener("click", function (e) {
  e.preventDefault();
  const options = {
    method: "GET",
    url: "https://weather-by-api-ninjas.p.rapidapi.com/v1/weather",
    params: { city: `${cityNameBro}` },
    headers: {
      "X-RapidAPI-Key": "e815b6a43dmshaf05aadc924417ep1259d8jsn096443c23012",
      "X-RapidAPI-Host": "weather-by-api-ninjas.p.rapidapi.com",
    },
  };

  axios
    .request(options)
    .then(function (response) {
      console.log(response.data);

      cloud_pact.innerText = response.data.cloud_pct;
      feels_like.innerText = response.data.feels_like;
      humidity.innerText = response.data.humidity;
      max_temp.innerText = response.data.max_temp;
      min_temp.innerText = response.data.min_temp;
      sunrise.innerText = response.data.sunrise;
      sunset.innerText = response.data.sunset;
      temp.innerText = response.data.temp;
      wind_degrees.innerText = response.data.wind_degrees;
      wind_speed.innerText = response.data.wind_speed;

      city_details.innerText = cityNameBro.toUpperCase();
      temperature_suffix.innerText = "°C";
      temperature.innerText = response.data.temp;
    })
    .catch(function (error) {
      console.error(error);
    });
});

// // cloud_pct: 0;
// // feels_like: 22;
// // humidity: 40;
// // max_temp: 23;
// // min_temp: 23;
// // sunrise: 1673485331;
// // sunset: 1673524249;
// // temp: 23;
// // wind_degrees: 0;
// // wind_speed: 0;
