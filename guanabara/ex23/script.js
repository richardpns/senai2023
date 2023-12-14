function contar() {
    let saida = document.getElementById('saida')
    let cont = 2
    while (cont <= 10) {
        saida.innerHTML += ` ${cont} -`
        cont += 2 // Corresponde a cont = cont + 2
    }
}