 #include <stdio.h>
 #include <iostream>
 int main()
 {
//declaracoes
	int caminhao = 18.0;
	int alqueire = 250.0;
	int qtcami;
	int qtalque;
//entradas
	std::cout << "caminhao carrega em media 18T de laranjas" << std::endl;
	std::cout << "um alqueiro produz em media 250T de laranja" << std::endl;
	
	printf ("digite a quantidade de caminhoes que a fazenda possui ");
	scanf ("%d" ,&qtcami);
	printf("digite a quantidade de alqueiros que a fazenda possui ");  
	scanf ("%d" ,&qtalque);
//processament
	//quantidade t de laranjas
		int quantidadeL = qtalque * alqueire;
	//calculo de viagens necessarias
		int numeroV = quantidadeL / caminhao;
//saidas
	std::cout << "Serao necessarias " << numeroV << " viagens de caminao para transportar toda a colheita." << std::endl;

return 0;
 }
