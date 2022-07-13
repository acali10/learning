let spaceship = prompt("Digite o nome da nave")

let charToReplace = prompt("Qual caracter você deseja substituir?")

<<<<<<< HEAD
let replacementChar = prompt("Por qual caracter você deseja substituir?")

let newSpaceship = ""

for (let pos = 0; pos < spaceship.length; pos++){
  if (spaceship[pos] == charToReplace){
    newSpaceship += replacementChar
  } else{
    newSpaceship += spaceship[pos]
  }
}
=======
let replacementChar = prompt("Por qual caracter você deseja subtituir?")

let newSpaceship = ""

for(let pos = 0; pos < spaceship.length; pos++){
  if(spaceship[pos] == charToReplace) {
    newSpaceship += replacementChar
  } else {
    newSpaceship += spaceship[pos]
  }
}

alert(`O novo nome da nave é ${newSpaceship}`)

>>>>>>> 0ea7d2c40f4f437d71cce452418bd27615453a56
