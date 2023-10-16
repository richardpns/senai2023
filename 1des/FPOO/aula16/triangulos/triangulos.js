class Triangulo {
    constructor(lado1, lado2, lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    tipo() {
        let resposta = '';
        if (this.lado1 === this.lado2 && this.lado2 === this.lado3) {
            resposta = 'equilatero';
        } else if (this.lado1 !== this.lado2 && this.lado2 !== this.lado3 && this.lado1 !== this.lado3) {
            resposta = 'escaleno';
        } else {
            resposta = 'isosceles';
        }
        return resposta;
    }

    showHTML() {
        let str = `<label>lado1:</label><label>${this.lado1}</label>`;
        str += `<label>lado2:</label><label>${this.lado2}</label>`;
        str += `<label>lado3:</label><label>${this.lado3}</label>`;
        str += `<label>Total:</label><label>${this.tipo()}</label>`;
        return str;
    }
}


const t1 = new Triangulo(10, 10, 10); 
const t2 = new Triangulo(10, 10, 20); 
const t3 = new Triangulo(10, 20, 30);

console.log(t1);
console.log(t2);
console.log(t3);
console.log(t1.tipo());
console.log(t2.tipo());
console.log(t3.tipo());


function mostrarTriangulos() {
    const mainElement = document.getElementById("triangulos");

    const triângulos = [t1, t2, t3];

    triângulos.forEach((triangulo, index) => {
        const div = document.createElement("div");
        div.textContent = `Triângulo ${index + 1}: Lado1=${triangulo.lado1}, Lado2=${triangulo.lado2}, Lado3=${triangulo.lado3}, Tipo=${triangulo.tipo()}`;
        mainElement.appendChild(div);
    });
}

mostrarTriangulos();


alert('ola')
