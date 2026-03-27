//MAPEANDO

const prevButton = document.querySelector(".prev");
const nextButton = document.querySelector(".next");
const arraySlides = document.querySelectorAll(".slide");
let index = 0;
let lastSlide = arraySlides.length - 1;
const ul = document.querySelector("ul");


//PASSAR SLIDE

function changeSlide(){
	let slideAtivo = document.querySelector(".slide.active");
	slideAtivo.classList.remove("active");
	arraySlides[index].classList.add("active");

	let bulletAtivo = document.querySelector("li.active");
	bulletAtivo.classList.remove("active");
	arrayBullets[index].classList.add("active");
}

//BOTÕES DE NAVEGAÇÃO

nextButton.onclick = () => {
	if(index < lastSlide){
		index = index + 1;
		changeSlide();
	}else{
		index = 0;
		changeSlide();
	}
}

prevButton.onclick = () => {
	if(index > 0){	
		index = index - 1;
		changeSlide();
	}else{
	index = lastSlide;
	changeSlide();
}
}

//LOOP FOR PARA CRIAR BULLETS

for( let i = 0; i < arraySlides.length; i++){
	let li = document.createElement("li");
	ul.appendChild(li);
}

document.querySelector("li").classList.add("active");

const arrayBullets = document.querySelectorAll("li");

arrayBullets.forEach((bullet, i) => {
	bullet.onclick = () => {
		index = i;
		changeSlide();
	}
})