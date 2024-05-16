//arrow function and this keyword ->refers current context

const user ={
    username : "Rittik",
    welcomemessage : function()
    {
        console.log(`${this.username} is welcome`)
        console.log(this)
    }
    
}

// user.welcomemessage()
// console.log(this)

// const chai = function()
// {
    // console.log(this)
// }
// chai()

const chai = () => {
    let username1 = "Rittik"
    console.log(username1)
}
chai()

// const addtwo = (num1,num2) =>
// {
    // return num1 + num2
// }

// const addtwo = (num1,num2) =>  (num1 + num2) //implicit return

const addtwo = (num1,num2) =>  ({name : "Rittik"})
console.log(addtwo(3,4))