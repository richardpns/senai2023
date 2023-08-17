#include <stdio.h>
/*total de presenças*/
int main()
{
	int a;
	int b;
	int c;
	float aulas, presencas;
	float media, frequencia;

	//entrada de dados 
	printf ("digite a nota da primeria prova");
	scanf ("%d" ,&a);
	
	printf ("digite a nota da segunda prova");
	scanf ("%d" ,&b);
	
	printf ("digite a nota da terceira prova");
	scanf ("%d" ,&c);
 //aulas, presencas
    printf ("digite o total de aulas dadas");
    scanf ("%d",&aulas);
    printf ("digite a quantidade de presencas");
    scanf ("%d" ,&presencas);
	 
     //processamento
	  media = (a + b + c) / 3;
	    frequencia = presencas / aulas;

	   
	   	//saidas parcias2
		   printf (" a media aritmetrica é = %d\n", media ); 
		   printf (" a frequencia é = %2.f\t ou %.0f%%\n", frequencia, frequencia * 100 ); 
	//saidas
	     if (media >=50 && frequencia >= 0.75)
		  printf("aprovado");
		 else
		 printf("reprovado");  
		   	return 0;
}

