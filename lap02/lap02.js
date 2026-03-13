console.log("bài tập 2");

const diemtrungbinh=(diemtoan,diemvan,diemanh)=>{

    return (diemtoan+diemvan+diemanh)/3;
}



const xeploai =(diemTB)=>{
    if(diemTB >= 9) {
        return "xuất sắc";
    } else if(diemTB >= 8 && diemTB < 9) {
        return "giỏi";
    } else if(diemTB >= 7 && diemTB < 8) {
        return "trung bình";
    } else {
        return "yếu";
    }
}
const diemtoan=7;
const diemvan=8;
const diemanh=9;
const mytb=diemtrungbinh(diemtoan,diemvan,diemanh);


console.log(`điểm trung bình là ${mytb} và xếp loại là ${xeploai(mytb)}`);

/*
1.
const xeploai = (diemTB) => {
}

function xeploai(diemTB) {
}

2.
const xeploai = (abc) => {
    console.log(abc)
}

const mytb = 8

xeploai(mytb)
*/ 