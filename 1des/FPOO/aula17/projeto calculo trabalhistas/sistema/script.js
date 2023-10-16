function inss(salario){
    if(salario < 1320.01)
      return salario * 7.5 / 100;
    else if(salario < 2571.30)
      return salario * 9 / 100; 
    else if(salario < 3856.95)
      return salario * 12 / 100; 
    else if(salario < 7507.49)
      return salario * 14 / 100;
    else
        return salario * 14 / 100    
    }

function irrf(salario){
  if(irrf < 1320.01)
  return irrf * 7.5 / 100;
else if(irrf < 2571.30)
  return irrf * 15 / 100; 
else if(irrf < 3856.95)
  return irrf * 22.5 / 100; 
else if(irrf < 7507.49)
  return irrf * 27.50 / 100;
else
    return irrf * 27 / 100    
}

let salario = 1000;
let inns = inss(salario);
let salarioBase = salario - inss;
let irrf = irrf(salarioBase);
let salarioLiquido = salarioBase - irrf;

console.log("salario: " + salario);
console.log("INSS: " + inss);
console.log("Salario base: " + salarioBase);
console.log("IRRF: " + irrf);
console.log("salario liquido: " + salarioLiquido);




