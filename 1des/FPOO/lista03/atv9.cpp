#include <stdio.h>
#include <string.h>
	int main(){
		
		int tabuada = 0;
		
		printf("digite a tabuada ");
		scanf("%d" ,&tabuada);
		
		for(int i = 0; i<=20; ++i){
			printf("%d x %d = %d\n", tabuada, i, i * tabuada);
		}
		
		
		
		return 0;
	}
