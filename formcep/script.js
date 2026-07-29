//MAPEAR CAMPOS

let campoCep = document.querySelector('#cep');

//SANITIZAÇÃO DO CAMPO CEP PARA ACEITAR APENAS NÚMEROS

campoCep.addEventListener('input', () => {
	campoCep.value = campoCep.value.replace(/[^0-9]/g, "");
	campoCep.value = campoCep.value.replace(/\D/g, "");
})

//VER QUANDO O USUÁRIO SAIU DO CAMPO CEP 
campoCep.addEventListener('blur', () => {

	if(campoCep.value.length !== 8){
		alert('CEP inválido');
		return;
	}else{
	fetch(`https://viacep.com.br/ws/${campoCep.value}/json/`)
	.then(resposta => {
		if(!resposta.ok) {
			throw new Error('Erro ao buscar CEP');
		}
		return resposta.json();
	})
	.then(data => {
		if(data.erro){
			alert('CEP não encontrado');
		}else{
			for(chave in data){
				if(document.querySelector("#" + chave)){
					document.querySelector("#" + chave).value = data[chave];
				}
			}
		}
	})
	.catch(erro => {
		console.error('Erro:', erro);
	})
	}

})
