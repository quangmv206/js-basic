console.log("bài tâp 1");
let fullname ="quang";
let birtyear="2006";
let isstudent=true;
const today =new Date();
const year =today.getFullYear();
console.log(year,typeof year);

const age = year - birtyear;

console.log(`tôi tên là ${fullname}
    ,năm sinh là ${birtyear},
     tôi ${isstudent  ? "là" : "không phải là"} học sinh,
     tôi ${age} tuổi`);  