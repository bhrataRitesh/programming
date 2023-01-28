
const e = require('express');
const express = require('express');
const app = express();
const morgan = require('morgan');

// morgan('tiny')

// app.use(morgan('tiny'))





// app.use(morgan('common'))
// app.use((req, res, next) => {
//     console.log('This is my first Middleware!!')
//     next();
//     console.log('This is my first middleware - after calling next()')
// })
// app.use((req, res, next) => {
//     console.log('This is my Second Middleware!!')
//     next();
// })
// app.use((req, res, next) => {
//     console.log('This is my Third Middleware!!')
//     next();
// })



app.use(morgan('tiny'))
app.use((req, res, next) => {
    // console.log(req.method.toUpperCase(), req.path);
    // req.method = 'GET';
    req.requestTime = Date.now();
    console.log(req.method, req.path);
    next();
})

app.use('/dogs', (req, res, next) => {
    console.log('I LOVE DOGS!!')
    next();
})

// app.use((req, res, next) => {
//     // console.log(req.query);
//     const { password } = req.query;
//     if (password === 'chickennuggest') {
//         next();
//     }
//     res.send("Sorry Inccorect password")

// })
const verifyPassword = (req, res, next) => {
    // console.log(req.query);
    const { password } = req.query;
    if (password === 'chickennuggest') {
        next();
    }
    res.send("Sorry Inccorect password")

}


app.get('/', (req, res) => {
    console.log(`REQUEST DATE: ${req.requestTime}`)
    res.send('Home Page')
})
app.get('/dogs', (req, res) => {
    console.log(`REQUEST DATE: ${req.requestTime}`)
    res.send('WOOF WOOF')
})

app.get('/secret', verifyPassword, (req, res) => {
    res.send('My SECreT is : sometimes I wear headphones in public so I donot want to talk with people')
})

app.use((req, res) => {
    res.status(404).send('NOT fOUND')
})



app.listen(3000, () => {
    console.log('HOsting 3000')
})