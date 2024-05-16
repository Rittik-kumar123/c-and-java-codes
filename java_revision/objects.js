// // // singleton->only when objects from by constructor

// // //objects literal

// // const mySym = Symbol("key1")

// // const user ={
// //     name : "Rittik",
// //     age : 21,
// //     [mySym] : "myKey1",
// //     location : "Kolkata",
// //     lastLogin:["Monday","Wed"]
// // }

// // console.log(user.name)
// // console.log(user[mySym])
// // // Object.freeze(user) -> makes a object immutable

// // user.greeting = function(){
// //     console.log(`Hello user ${this.name}`);
// // }
// // console.log(user.greeting())

// //------------------------------------------------------------------------------

// //const tinderUser=new object()

// const tinderUser={}

// tinderUser.name="Rittik Kumar"
// tinderUser.age=18
// tinderUser.isloggedIn=false

// // console.log(tinderUser)

// let regularUser ={
//     email:"Rk@",
//     name:{
//         userFullName:{
//             firstName:"Rittik",
//             lastName:"Kumar"
//         }
//     }
// }

// // console.log(regularUser.name.userFullName.firstName)

// let obj1={1:'a',2:'b'}
// let obj2={3:'c',4:'d'}
// // let obj3=Object.assign({},obj1,obj2);
// let obj3={...obj1,...obj2}
// console.log(obj3)

// console.log(Object.keys(tinderUser));

// console.log(tinderUser.hasOwnProperty('age'))

//---------------------------------------------------------------


//Destructure
const course = {
    courseName:"js",
    price: "999",
    student: "rittik"
}

const {student : name1} = course

console.log(name1)