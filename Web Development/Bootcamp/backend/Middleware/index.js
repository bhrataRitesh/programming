
const express = require('express');
const app = express();
const morgan = require('morgan');

// morgan('tiny')

app.use(morgan('tiny'))

app.get('/', (req, res) => {
    res.send('Home Page')
})
app.get('/dogs', (req, res) => {
    res.send('WOOF WOOF')
})





app.listen(3000, () => {
    console.log('HOsting 3000')
})