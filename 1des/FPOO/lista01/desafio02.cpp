#include <stdio.h>
int main(){
  int vel;
  int dis;
  //entradas
  printf ("digite a velocidade do carro");
  scanf ("%d" ,&vel);
  
  printf ("digite a distancia a ser percorrida");
  scanf ("%d" ,&dis);
  //processamento 
  int result = dis / vel;
  //saidas
  printf("velocidade = %d\n",vel);
  printf("distancia = %d\n",dis);
  printf("o tempo a ser percorrido é = %d\n",result);
  return 0;
}
  
