const express = require('express');
const app = express();          //initialise express package 
// console.dir(app);
// app.use((req, res) => {                    //request recieving
//     //has two argument to take 1. request and 2. Response 
//     console.log("we got new request!!");

//     // checking request 
//     console.log(req);

//     //sending response

//     res.send("Hello we got your Request sending response!");

//     //      can also send json and html response
//     res.send("<h1>Bruh sudhar jao</h1>");
// })

// will use res.get

// for /dog will send "bhoo bhoo"

app.get('/dog', (req, res) => {
    res.send('bhoo bhoo');
})

// for /cat will send "Meow"

app.get('/cat', (req, res) => {
    res.send('Meow');
})

app.get('/', (req, res) => {
    res.send('Welcome to the Home page')
})


app.get('/r/:subreddit', (req, res) => {        //requesting similar type 
    const { subreddit } = req.params;
    res.send(`<h1>You are viewing ${subreddit} subreddit </h1>`);
})

app.get('/search', (req, res) => {
    const { q } = req.query;
    res.send(`<h1> Your search for: ${q} </h1>`);
})


app.get('*', (req, res) => {        // all other thing than can be requested
    res.send("Invalid request")
})


app.listen(3000, () => {                        //setting up port number 
    console.log("Listening on the port 3000!")
})