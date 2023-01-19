const express = require('express');
const app = express();
const path = require('path');
const { v4: uuid } = require('uuid');
const methodOverride = require('method-override')



app.use(express.urlencoded({ extended: true })) //get dat in urleencoded form
app.use(express.json())  // for getting data in json form
app.set('view engine', 'ejs')
app.set('views', path.join(__dirname, 'views'))
app.use(methodOverride('_method'))

let comments = [
    {
        id: uuid(),
        username: 'Akash',
        comment: 'Mai akash ko bhool gaya hun Akash apke dimag me hai mere nahi'
    },
    {
        id: uuid(),
        username: 'Shashi',
        comment: 'Mai Shashi ko bhool gaya hun Shashi apke dimag me hai mere nahi'
    },
    {
        id: uuid(),
        username: 'Rahul',
        comment: 'Mai Rahul ko bhool gaya hun Rahul apke dimag me hai mere nahi'
    },
]

app.get('/comments', (req, res) => {
    res.render('comments/index', { comments })
})
app.get('/comments/new', (req, res) => {
    res.render('comments/new');
})
app.post('/comments', (req, res) => {
    // console.log(req.body)
    const { username, comment } = req.body;
    comments.push({ username, comment, id: uuid() });
    res.redirect('/comments');
})

app.get('/comments/:id', (req, res) => {
    const { id } = req.params;
    const comment = comments.find(c => c.id === id)
    res.render('comments/show', { comment })
})

app.get('/comments/:id/edit', (req, res) => {
    const { id } = req.params;
    const comment = comments.find(c => c.id === id)
    res.render('comments/edit', { comment })
})

app.patch('/comments/:id', (req, res) => {
    const { id } = req.params;
    const newCommentText = req.body.comment;
    const foundcomment = comments.find(c => c.id === id);
    // res.send('updating something')
    foundcomment.comment = newCommentText;
    res.redirect('/comments');
})

app.delete('/comments/:id', (req, res) => {
    const { id } = req.params;
    comments = comments.filter(c => c.id !== id);
    res.redirect('/comments');
})
app.get('/tacos', (req, res) => {

    res.send("Get/tacos response");
})
app.post('/tacos', (req, res) => {
    const { meat, qty } = req.body;
    // console.log(req.body)
    res.send(`Okh here are YOur ${meat} and ${qty}`);
    // res.send("POst/tacos response");

})


app.listen(4000, () => {
    console.log("On port 4000!");
})


// GET / comments - list all comments
// Post / comments - create a new comments
// GET /comments/:id - Get one comment (using ID)
// Patch /comments/:id - Update one comment
// Delete /comments/:id - Destroy one comment 