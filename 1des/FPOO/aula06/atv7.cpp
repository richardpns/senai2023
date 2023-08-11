#include<stdio.h>
int main(){
	int i = 0;
	while(i != 14){	
		printf("Digite um número inteiro: ");
		scanf("%d",&i);
		int i1 = i * 2;
		printf("%d\n" ,i1);	
	}
	return 0;
}
