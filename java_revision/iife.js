//Immediately Invoked Function Expression(IIFE) =. there is some problem occurs by globle scope pollution to 
//remove it we use IIFE

(function chai ()
{
    console.log("HII I Am")
})();

( (name) => console.log(`HII I Am Rittik ${name}`))('rittik');
