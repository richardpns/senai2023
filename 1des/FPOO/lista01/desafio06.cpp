#include <stdio.h>
#include <iostream>
int main(){
  int vel = 900 ;
  int dis;
  //entradas
  std::cout << "a velocidade de cruzeiro do 747-300 e de 900.0km/h" << std::endl;
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
