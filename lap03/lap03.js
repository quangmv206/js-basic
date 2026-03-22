const pr1={
    name: "áo thun",
    price : 500,
    instock: true
}
const pr2={
    name: "áo sơ mi",
    price : 600,
    instock: false
}
const pr3={
    name: "áo dài tay",
    price : 700,
    instock: true
}
const pr4={
    name: "áo polo",
    price : 800,
    instock: true
}
const pr5={
    name: "áo ngắn tay",
    price : 900,
    instock: false
} 

const product = [pr1,pr2,pr3,pr4,pr5];

console.log(product);
const firtproduct = product[0];
console.log("1.Tên sản phẩm đầu tiên là: " , firtproduct.name);


const product2 = [pr1,{
    name: pr2.name,
    price : 150,
    instock: pr2.instock
},pr3,pr4,pr5];
console.log("2.sản phẩm thứ 2 có giá là 150: " , product2 );

product.push({
name: "last product",
price: 1000,
instock: true
})
console.log("3.sản phẩm mới được thêm vào cuối mảng: " , product);

product.pop();  
console.log("4.sản phẩm mới được xóa khỏi cuối mảng: " , product);


product.forEach((item,index) => {
    console.log("5.product name",item.name);

})

const pricelist =product.map((item,index) => {
return item.price;

    })
    console.log("6.danh sách giá sản phẩm: " , pricelist); 

const instocklist = product.filter((item,index) => {
    return item.instock === true;
})
console.log("7.danh sách sản phẩm còn hàng: " , instocklist);

for(const key in pr1){
    console.log(  key,pr1[key]);
}
console.log("8.các thuộc tính của sản phẩm đầu tiên: " , pr1);