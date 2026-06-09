//mapear elementos

const input = document.querySelector("input");
const botao = document.querySelector("button");
const ul = document.querySelector("ul");
const listaVazia = document.querySelector(".listaVazia");
const mensagemErro = document.querySelector(".mensagemErro");

//quando clicar

botao.onclick = () => {

	if (input.value !== "") {
		const inputValue = input.value;
		let novoLi = document.createElement("li");
		novoLi.innerText = inputValue;
		ul.appendChild(novoLi);
		input.value = "";
		input.focus();

		mensagemErro.classList.remove("ativa");
		
		renderizarLista();
	} else {
		mensagemErro.classList.add("ativa");
	}
}

//apagar itens da lista

function renderizarLista() {
	const arrayItens = document.querySelectorAll("li");

	arrayItens.forEach((item) => {
		item.onclick = () => {
			if(item.classList.contains("listaVazia")) {
			
			}else{
			ul.removeChild(item);
			renderizarLista();
			}

		}
	})

	if (arrayItens.length <= 1) {
		listaVazia.classList.add("ativa");
	} else {
		listaVazia.classList.remove("ativa");
	}
}

renderizarLista();

