//creation
const obj={
    name:"sayujya",
    age: 20,
    email: "shubhtiwari19419@gmail.com"
}
obj.money=2000;
//read
console.log(obj);//entire object
console.log(obj.name);//one entry
//update
obj.age=21;
console.log(obj.age);
//delete
delete obj.money;