
function out(num) {

    let total = 1;
    while (num > 1) {
        total = total * num;
        num--;
    }
    console.log(total);
    document.write(total);
}

let num = parseInt(prompt("Enter number to find its factorial:"));

out(num);


// let fact = 1;
// for (let i = 1; i <= num; i++) {
//     fact *= i;
// }
// console.log(fact);