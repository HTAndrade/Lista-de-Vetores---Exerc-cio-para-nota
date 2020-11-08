#define ex1
#include <stdio.h>

#ifdef ex1

/*1.	Leia um vetor de 6 posições. Exiba a quantidade de valores pares que estão armazenados no vetor. 
Exiba também a posição e o respectivo par. Informe ao usuário caso não tenha sido digitado nenhum número par no vetor.*/

int vetA[6];

int funçãovetA(){

  int x;
  int contpar = 0;

  printf("Digite um número qualquer, até preencher um vetor de 6 posições.\n");

  for(x = 1; x <= 6; x++){
    scanf("%d", &vetA[x]);
    if(vetA[x] % 2 ==0){
      contpar++;
    }
  }
  printf("\n");
  if(contpar == 0){
    printf("Não foram digitados números pares.");
  } else if(contpar > 0){
      for(x = 1; x <= 6; x++){
        if(vetA[x] % 2 ==0){
          printf("%dª Posição: %d é par.\n", x, vetA[x]);
        }      
      } 
    }
  
return 0;
}
int main() {
  funçãovetA();
}

#endif

////////////////////////////////////////////////////////////////////////////////////
