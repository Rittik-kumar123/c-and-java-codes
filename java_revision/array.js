//array

const myArr = [0,1,2,3,4,5]
const myHeroes=["Rittik","Anshu"];

const newArr = new Array(1,2,3,4);
// console.log(newArr)


// console.log(myArr[2])

//Array Methods

// myArr.push(6);
// myArr.pop()
// myArr.unshift(9);
// myArr.shift()

//Slice -> .slice(1,3) ->element at last index not get include
//splice -> .splice(1,3) ->element at last index get include and original array also gets manipulated




console.log(myArr)

//push->two array are joined but the instead of including elements a array has been stored.
//concat->element of a both arays are cncatenate and return a new array

let marvel = ["iron man","Captain america"];
let dc = ["bat man","Super man"];

let allHero = [...marvel,...dc]; //in this method more than one array at a time get conatenated.

// console.log(allHero)

console.log(Array.isArray("Rittik"))

console.log(Array.from("Rittik"))

console.log(Array.from({name: "Rittik"})) //Interesting Case for interview



