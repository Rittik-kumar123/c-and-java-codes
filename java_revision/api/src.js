const requestUrl = 'https://randomuser.me/api'
const xhr = new XMLHttpRequest();
xhr.open('GET',requestUrl)
xhr.onreadystatechange = function(){
    console.log(xhr.readyState);
    if(xhr.readyState === 4)
    {
        const data = JSON.parse(this.responseText)
        console.log(data.results[0].gender);
    }
}
xhr.send()