const express = require('express');
const app = express();
const path = require('path');
const mongoose = require('mongoose');
const methodOverride = require('method-override')
mongoose.set('strictQuery', false)

const Product = require('./models/product');

mongoose.connect('mongodb://127.0.0.1:27017/farmStand')
    .then(() => {
        console.log("Mongo Connection Open!")
    })
    .catch(err => {
        console.log("Oh no Mongo Connection Error")
        console.log(err)
    });

app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');
app.use(express.urlencoded({ extended: true }))
app.use(methodOverride('_method'))

const categories = ['fruit', 'vegetable', 'dairy']

app.get('/products', async (req, res) => {

    const { category } = req.query;
    if (category) {
        const products = await Product.find({ category })
        res.render('products/index', { products, category });
    }
    else {

        const products = await Product.find({})
        res.render('products/index', { products, category: 'All' });

    }
    // console.log(products)
    // res.send("ALL PRODUCTS WILL BE HERE!");

})
app.get('/products/new', (req, res) => {
    res.render('products/new', { categories })
})
app.get('/products/:id/edit', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findById(id)
    res.render('products/edit', { product, categories })
})
app.put('/products/:id', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findByIdAndUpdate(id, req.body, { runValidators: true, new: true })
    // console.log(req.body);
    // res.send('PUT!!!');
    res.redirect(`/products/${id}`)
})
app.post('/products', async (req, res) => {
    const newproduct = new Product(req.body);
    // console.log(req.body)
    await newproduct.save();
    console.log(newproduct)
    res.redirect(`/products/${newproduct._id}`)
})
app.get('/products/:id', async (req, res) => {
    const { id } = req.params;
    const product = await Product.findById(id)
    // console.log(product)
    res.render('products/show', { product })
})
app.delete('/products/:id', async (req, res) => {
    const { id } = req.params;
    await Product.findByIdAndDelete(id);
    res.redirect('/products')
})






app.listen(2000, () => {
    console.log("App is Listening to the port 2000!")
})