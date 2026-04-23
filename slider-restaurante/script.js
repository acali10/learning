let prevButton = document.querySelector(".prev");
let nextButton = document.querySelector(".next");
let pratos = document.querySelector(".pratos");
let arrayPratos = pratos.querySelectorAll(".prato");
let arrayTxt = document.querySelectorAll(".texto");


let index = 0;
let ultimoPrato = arrayPratos.length;

function passarSlide(){
    pratos.style.transform = `translateX(calc(${index} * -25%))`;
}

function mudarAtivo(){
    let pratoAtivo = document.querySelector(".prato.ativo");
    let txtAtivo = document.querySelector(".texto.ativo");

    pratoAtivo.classList.remove("ativo");
    arrayPratos[index].classList.add("ativo");
    
    txtAtivo.classList.remove("ativo");
    arrayTxt[index].classList.add("ativo");

}

nextButton.onclick = function proximo(){
    if(index < 3){
        index++;
        mudarAtivo()
        passarSlide();

    }else{
        index = 0;
        mudarAtivo()
        passarSlide();
    }

}

prevButton.onclick = function anterior(){
    if(index > 0){
        index--;
        mudarAtivo()
        passarSlide();
    }else{
        index = 3;
        mudarAtivo()
        passarSlide();
    }
}