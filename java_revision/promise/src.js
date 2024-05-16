// // // const promiseOne = new Promise((resolve,reject)=>{
// //     // Do async task
// //     // DB calls,Cryptography
// //     // setTimeout(function()
// //     // {
// //         // console.log('Async task performed')
// //         // resolve()
// //     // },1000)
// // // })


// // //then is directly related to resolve
// // // promiseOne.then(function(){
// //     // console.log('promise consumed')
// // // })





// // new Promise((resolve,reject)=>{
// //     //Do async task
// //     //DB calls,Cryptography
// //     setTimeout(function()
// //     {
// //         console.log('Async task performed')
// //         resolve({name:"rittik",email:"rk@gml"})
// //     },1000)
// // }).then(function(user){
// //     console.log('promise consumed')
// //     console.log(user.name)
// // })


// // const promiseOne = new Promise((resolve,reject) => {
//     // setTimeout(()=>{
//         // const error = true
//         // if(error)
//         // {
//             // resolve({name:"rittik",email:"rk@gml"})
//         // }
//         // else
//         // {
//             // reject('Something went wrong')
//         // }
//     // },1000)
// // })
// // 
// // promiseOne.then((user) =>{
//     // console.log(user.name)
//     // return user.name
// // })
// // .then((name)=>{
//     // console.log(name)
// // })
// // .catch((error)=>{
//     // console.log(error)
// // })

// const promiseTwo = new Promise((resolve,reject) => {
//     setTimeout(()=>{
//         const error = true
//         if(error)
//         {
//             resolve()
//         }
//         else
//         {
//             reject('Something went wrong')
//         }
//     },1000)
// })

// async ()=>{
//     try{
//         const response = await fetch('https://randomuser.me/api')
//         const data = await response.json
//         console.log(data)
//     }
//     catch(error)
//     {
//         console.log(error)
//     }
// }

// // async ()=>{
//     // try{
//         // const response = await promiseTwo
//         // console.log(response)
//     // }
//     // catch(error)
//     // {
//         // console.log(error)
//     // }
// // }

// const promiseTwo = new Promise((resolve,reject) => {
    // setTimeout(()=>{
        // const error = true
        // if(error)
        // {
            // resolve()
        // }
        // else
        // {
            // reject('Something went wrong')
        // }
    // },1000)
// })

const fetchData = async () => {
    try {
        const response = await fetch('https://randomuser.me/api');

        if (!response.ok) {
            throw new Error(`HTTP error! Status: ${response.status}`);
        }

        const data = await response.json();
        console.log(data);
    } catch (error) {
        console.error('Error:', error.message);
    }
};

fetchData();