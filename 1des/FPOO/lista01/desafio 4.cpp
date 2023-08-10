#include <stdio.h>
#include <iostream>
int main()
{
	int nv;
	int ne;
	int nome;
	
	std::cout << "contagem de pontos:" << std::endl;
	std::cout << "vitoria = 3 \nempate = 1" << std::endl;
	
	printf("digite a quantidade de vitorias: ");
		scanf ("%d" ,&nv);
	printf("digite a quantidade de empates: ");
		scanf ("%d" ,&ne);
	printf("digite o nome do time:   ");
		scanf ("%d" ,&nome);
//processamento
	int res1 = nv * 3;
	int res2 = res1 + ne;
//saidasno
	        std::cout << "total de pontos: \t   " << res2 << std::endl;

  	return 0;
}
