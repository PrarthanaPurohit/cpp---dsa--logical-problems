// console.log(7/2);
// console.log("glowing">="glow");
// let a = null;
// console.log(a);


// const sumcal = () =>{
//     console.log("hello");

//     }
    
// sumcal();


// let value=0;
// let intervalId = null;

// function counting(){
//     value+=1;
//     console.log({counter:value});
//     console.log(intervalId);
// }

// intervalId = setInterval(counting,1000);
class User{
    constructor(name, age){
    this.name = name;
    this.age = age;

}
display(){
    console.log(`${this.name} is ${this.age} old` );
}}
const user1 = new User('Riya',20);
const user2 = new User('Siya',20);

console.log(user1.display());