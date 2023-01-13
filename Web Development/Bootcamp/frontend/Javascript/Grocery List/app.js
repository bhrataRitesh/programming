const form = document.querySelector("form");
const list = document.querySelector("#list");

form.addEventListener("submit", function (e) {
  e.preventDefault();
  const productInput = form.elements.product;
  const productQty = form.elements.qty;

  const newLI = document.createElement("li");
  newLI.innerHTML = `${productInput.value}-${productQty.value}`;
  list.appendChild(newLI);

  productInput.value = "";
  productQty.value = "";
});
