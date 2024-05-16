const form = document.querySelector('form');
//this usecase will give u empty
//const height = parseInt(document.querySelector('#height').value)

form.addEventListener('submit',(e) => {
    e.preventDefault();

    const height = parseInt(document.querySelector('#height').value)
    const weight = parseInt(document.querySelector('#weight').value)

    if(height === '' || height < 0 || isNaN(height))
    {
        result.innerHTML = `Please give valid input ${height}`
    }
    if(weight === '' || weight < 0 || isNaN(weight))
    {
        result.innerHTML = `Please give valid input ${weight}`
    }
    else{
        const ans = (weight/((height*height)/10000)).toFixed(2);
        result.innerHTML = `${ans}`
    }
})