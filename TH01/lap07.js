console.log("check lap07");
const saveBtn = document.getElementById("btnSave");
const inputTodo = document.getElementById("name");
if(saveBtn){
 saveBtn.addEventListener("click",  ()=>{
        const myTodo={
        id:getRandomInt(1,1000),
        name: inputTodo.value
    }
 
const currentTodoStr = localStorage.getItem("todo");
//đã tồn tại key todo
if(currentTodoStr){
    const currentTodo = JSON.parse(currentTodoStr);
    currentTodo.push(myTodo);
    localStorage.setItem("todo",JSON.stringify(currentTodo));
}
else{
localStorage.setItem("todo",JSON.stringify([myTodo]));
}   

window.location.href = "lap07.html";
})  }


//hàm random id
function getRandomInt(min, max) {
    min = Math.ceil(min);     // làm tròn lên
    max = Math.floor(max);    // làm tròn xuống
    return Math.floor(Math.random() * (max - min + 1)) + min;
} 

const generateTodoTable = () => {
    const todoListStr = localStorage.getItem("todo");
    if (todoListStr) {
        const todoList = JSON.parse(todoListStr);
        console.log(todoList)
     const tbody = document.querySelector("#todoList tbody");
    if(todoList && todoList.length){
        todoList.forEach((todo,index)=>{
            tbody.innerHTML += `
                <tr>
                    <td>${todo.id}</td>
                    <td>${todo.name}</td>
                    <td><button data-id="${todo.id}" class="btn-Delete">Xóa</button></td>
                </tr> 
            `
        })  
    }
}

}
generateTodoTable ();


const deleteBtns = document.querySelectorAll(".btn-Delete");
if(deleteBtns){
    deleteBtns.forEach((btn,index)=>{
        console.log(btn);
 btn.addEventListener ("click", ()=>{
    const id = btn.getAttribute("data-id");
    alert("Bạn có chắc muốn xóa không?"+id);
    handleDeleteTodo(id);
 })
})
}

const handleDeleteTodo = (id) => {
    const todoListStr = localStorage.getItem("todo");
    if (todoListStr) {
        const todoList = JSON.parse(todoListStr);
        console.log (todoList,id);
        const updatedTodoList = todoList.filter((todo,index)=>todo.id != id);
        localStorage.setItem("todo", JSON.stringify(updatedTodoList));
        window.location.reload();
    }
}
//localStorage.clear(); : dùng để reset lại toàn bộ 