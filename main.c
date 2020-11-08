#define ex2

#include <stdio.h>

#ifdef ex1

/*1.	Leia um vetor de 6 posições. Exiba a quantidade de valores pares que estão armazenados no vetor. 
Exiba também a posição e o respectivo par. Informe ao usuário caso não tenha sido digitado nenhum número par no vetor.*/

int vetA[6];

int funcaovetA(){

  int x;
  int contpar = 0;

  printf("Ex.1: Digite um número qualquer, até preencher um vetor de 6 posições.\n");

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
  funcaovetA();
}

#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex2

/*2.	Ler um conjunto de 6 números reais, armazenando-o no vetor A. Calcular o quadrado das componentes deste vetor, 
armazenando o resultado no vetor B. Exiba os dois vetores. 
Exemplo: Suponha que você tenha digitado 2 na posição zero do vetor A no vetor B na mesma posição será o valor de A[0] ao quadrado. 
A[0]=2 e B[0]= 4  e assim sucessivamente. 
*/

float vetA[6];
float vetB[6];

int funcaovetAeB(){
  int x;

  printf("Ex.2: Digite 6 números reais até preencher um vetor de 6 posições.\n");
  printf("O vetor B irá armazenar o número ao quadrado digitado no vetor A, de acordo com as posições.\n");
  printf("Exemplo: A[0]=2 e B[0]= 4  e assim sucessivamente.\n");

  for(x = 0; x < 6; x++){
    scanf("%f", &vetA[x]);
    vetB[x] = vetA[x] * vetA[x];
  }
  for(x = 0; x < 6; x++){
  printf("\nA[%d] = %.2f e B[%d] = %.2f;", x, vetA[x], x, vetB[x]);
  }
return 0;

}

int main() {
  funcaovetAeB();

}



////////////////////////////////////////////////////////////////////////////////////

#ifdef ex3

#endif

////////////////////////////////////////////////////////////////////////////////////