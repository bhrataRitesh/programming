const figlet = require("figlet");
figlet("Ram Ram", function (err, data) {
  if (err) {
    console.log("SOmething went wrong...");
    console.dir(err);
    return;
  }
  console.log(data);
});
