//function

// function saymyname(){
    // console.log("Hii it's rittik");
// }
// 
// saymyname();
// 
// function addTwoNumber(num1,num2)
// {
    // return `${num1}+${num2}`;
// }
// let num=addTwoNumber(2,3)
// console.log(num);

function loginUser(name)
{
    if(!name)
    {
        console.log(`${name} please enter name again`)
        return
    }
    else
    {
        console.log(`${name} logged in`)
    }
}

// console.log(loginUser("Rittik"))

function calculateCartPrice(...num1)
{
    return num1
}

console.log(calculateCartPrice(20,30,40))

const user =
{
    Username:"Rittik Kumar",
    age:18
}

function informationOfUser(anyobject)
{
    console.log(`${anyobject.Username} and ${anyobject. age}`);
}

informationOfUser(user)