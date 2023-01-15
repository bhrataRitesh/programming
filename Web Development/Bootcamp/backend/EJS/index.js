const express = require('express');
const app = express();
const path = require('path'); //use is in line no 10
const redditData = require('./data.json');


app.use(express.static(path.join(__dirname, 'public')));




app.set('view engine', 'ejs');  // uses ejs file to run to html file or js embbeded on html



app.set('views', path.join(__dirname, '/views'))   //uses to join the index.js file to views folder , so that whenever we call index.js from out from file it will also call the views/home.ejs file




app.get('/', (req, res) => {
    res.render('home.ejs');  //asking to render home.ejs file 
})

app.get('/random', (req, res) => {
    const num = Math.floor(Math.random() * 10) + 1;     //displaying logic in the ejs file
    res.render('rand.ejs', { random: num })     //passes the num to the ejs file
})

app.get('/r/:subreddit', (req, res) => {
    const { subreddit } = req.params;       //using params to display on via rendering
    res.render('subreddit.ejs', { subreddit });
})

app.get('/cats', (req, res) => {
    const cats = ['Blue', 'Rocket', 'Monty', 'Staphanie', 'Winston'];
    res.render('loop', { cats });   //also can be written {anyName:cats}
})


app.get('/r2/:subreddit2', (req, res) => {
    const { subreddit2 } = req.params;
    const data = redditData[subreddit2];
    if (data) {
        res.render('subreddit2.ejs', { ...data })  //sending whole data to the ejs file
    }
    else {
        res.render('notfound', { subreddit2 })
    }

})



app.listen(8080, () => {
    console.log('Listening to the port 8080: ');
})