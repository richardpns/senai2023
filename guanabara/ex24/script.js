function contar() {
    let saida = document.getElementById('saida')
    let cont = 10
    while (cont >= 1) {
        saida.innerHTML += ` ${cont} -`
        cont -- // Corresponde a cont = cont - 1
    }
}