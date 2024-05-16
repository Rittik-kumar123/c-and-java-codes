//scope
// var c=300
let a=300;

if(true)
{
    let a=10;//life span inside the scope only
    const b=20;//life span inside the scope
    var c=30;//scope is notdefined
}

// console.log(a)
// console.log(b)
// console.log(c)

//------------------------------------------------------

function one()
{
    const username ="Rittik"

    function two()
    {
        const website = "youtube"
        // console.log(username);
    }
    //console.log(website)

    two()
}

one()

//*************************************** Interesting ******************************//

addone(5)

function addone(num)
{
    return num+1;
}

const addtwo = function(num)
{
    return num+2;
}

console.log(addtwo(5))