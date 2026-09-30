let input = document.getElementById('tarefaInput');
let button = document.getElementById('adicionarBtn');
let lista = document.getElementById('listaTarefas');

button.addEventListener('click', function () {
	let tarefa = input.value;
	if (tarefa !== "") {
		let novoLi = document.createElement('li');
		let btnRemover = document.createElement('button');
		let spanTexto = document.createElement('span');
		let btnEditar = document.createElement('button');
		spanTexto.innerText = tarefa;
		novoLi.appendChild(spanTexto);
		btnRemover.innerText = 'Remover';
		novoLi.appendChild(btnRemover);
		btnEditar.innerText = 'Editar';
		novoLi.appendChild(btnEditar);
		lista.appendChild(novoLi);
		input.value = "";

		btnRemover.addEventListener('click', function () {
			novoLi.remove();
		});

		btnEditar.addEventListener('click', function () {
			let novoTexto = prompt('Edite a tarefa:', spanTexto.innerText);
			if (novoTexto !== null && novoTexto !== "") {
				spanTexto.innerText = novoTexto;
			}
		});
	}
	});
	

