const clock = document.getElementById('clock');

let val;

const startButton = document.querySelector('#start').addEventListener('click', () => {
    val = setInterval(() => {
        let date = new Date();
        clock.innerHTML = date.toLocaleTimeString();
    }, 1000);
});

const stopButton = document.querySelector('#stop').addEventListener('click', () => {
    clearInterval(val);
});
