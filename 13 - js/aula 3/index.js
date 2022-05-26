let pilotName = prompt("Qual é o seu nome, piloto?")

let initialVelocity = 0

let velocity = prompt(`Olá ${pilotName}. A qual velocidade você gostaria de chegar?`)
confirm(`Você confirma essa velocidade de ${velocity} km/h?`)

if (velocity < 0) {
  alert("A nave está parada. Considere aumentar a velocidade.")
} else if (velocity < 40){
  alert("Você está devagar, podemos aumentar mais.")
} else if (velocity > 40 && velocity < 80){
  alert("Parece uma boa velocidade para se manter.")
} else if (velocity >= 80 && velocity < 100){
  alert("Velocidade alta. Considere diminuir.")
} else if (velocity >= 100){
  alert("Velocidade perigosa. Controle automático forçado.")
}