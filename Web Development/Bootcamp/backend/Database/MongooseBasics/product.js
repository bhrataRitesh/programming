const mongoose = require('mongoose');
mongoose.set("strictQuery", false);
try {
    mongoose.connect('mongodb://127.0.0.1:27017/shopApp')
        .then(() => {
            console.log("hurray connected")
        })
}
catch (err) {
    console.log("Error catched")
    console.log(err)
}

const productSchema = new mongoose.Schema({
    name: {
        type: String,
        required: true
    },
    price: {
        type: Number,
        min: 0
    },
    onSale: {
        type: Boolean,
        default: false
    },
    categories: [String]
});

const Product = mongoose.model('Product', productSchema);
// const bike = new Product({ name: 'Tire Pump', price: 19.50, categories: ['cycling'] });

// bike.save()
//     .then(data => {
//         console.log("It worked!")
//         console.log(data)
//     })
//     .catch(err => {
//         console.log("Oh no error babay")
//         console.log(err)
//     })

// Product.findOneAndUpdate({ name: 'Tire Pump' }, { price: 100 }, { new: true, runValidators: true })
//     .then(data => {
//         console.log("It worked!")
//         console.log(data)
//     })
//     .catch(err => {
//         console.log("Oh no error babay")
//         console.log(err)
//     })


productSchema.methods.greet = function () {
    console.log("Hello!! HI!! Howdy!!");
    // console.log(`- from ${this.name}`)
};

const findProduct = async () => {
    const foundProduct = await Product.find({ name: 'Mountain BIke' });
    foundProduct.greet();
    // console.log(foundProduct);
}

findProduct();