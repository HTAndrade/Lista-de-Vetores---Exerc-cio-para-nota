/*Nome: Hugo Tomaz dos Santos Andrade
  RA: 0050482021021*/

#define ex1

#include <stdio.h>

#ifdef ex1

/*1.	Leia um vetor de 6 posições. Exiba a quantidade de valores pares que estão armazenados no vetor. 
Exiba também a posição e o respectivo par. Informe ao usuário caso não tenha sido digitado nenhum número par no vetor.*/

int vetA[6];

int funcaovetA(){

  int x;
  int contpar = 0;

  printf("Ex.1: Digite um número qualquer, até preencher um vetor de 6 posições.\n");
  printf("Ao final, será apresentado a posição dos números pares.\n\n");

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
  printf("Exemplo: A[0]=2 e B[0]= 4  e assim sucessivamente.\n\n");

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

#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex3

/*3.	Leia a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral. 
As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.*/

float notas[15];

int media(){
  int x;
  float n = 0; //Somador das notas 
  float m; //Média das notas

  printf("Ex.3: Digite as 15 notas da prova até preencher todo o vetor.\n");
  printf("Ao final será apresentado a média da classe.\n");

  for(x = 0; x < 15; x++){
    do{
    scanf("%f", &notas[x]);
      if(notas[x] < 0 || notas[x] > 10){
        printf("\nDigite a nota entre 0 e 10.\n");
      }
    } while(notas[x] < 0 || notas[x] > 10);

    n = n + notas[x];

  }

  m = n/15;

  printf("\nA média da classe é: %.2f", m);

return 0;

}

int main(){
  media();

}


#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex4

/*4.	Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada. 
Construa o vetor D, sendo este a junção dos três outros vetores. Armazene no vetor D o primeiro elemento do
vetor A depois do B e do C e assim sucessivamente.  Apresentar o conteúdo de todos os vetores. 
Exiba quantas vezes apareceram números negativos no vetor D.*/

int vetA[5], vetB[5], vetC[5], vetD[15];
int contn = 0; //Contador de números negativos

int vetorA(){
  
  int x;
  
  printf("Ex.4: Digite 5 números para alimentar o vetor A de 5 posíções.\n");

  for(x = 0; x < 5; x++){
    scanf("%d", &vetA[x]);
  }
  return 0;
}

int vetorB(){
  int x;
  
  printf("\nDigite 5 números para alimentar o vetor B de 5 posíções.\n");

  for(x = 0; x < 5; x++){
    scanf("%d", &vetB[x]);
  }
  return 0;
}

int vetorC(){
  int x;
  
  printf("\nDigite 5 números para alimentar o vetor C de 5 posíções.\n");

  for(x = 0; x < 5; x++){
    scanf("%d", &vetC[x]);
  }
  return 0;
}

int vetorD(){

  int x;
  
  vetD[0]  = vetA[0];
  vetD[1]  = vetB[0];
  vetD[2]  = vetC[0];
  vetD[3]  = vetA[1];
  vetD[4]  = vetB[1];
  vetD[5]  = vetC[1];
  vetD[6]  = vetA[2];
  vetD[7]  = vetB[2];
  vetD[8]  = vetC[2];
  vetD[9]  = vetA[3];
  vetD[10] = vetB[3];
  vetD[11] = vetC[3];
  vetD[12] = vetA[4];
  vetD[13] = vetB[4];
  vetD[14] = vetC[4];

  for(x = 0; x < 15; x++){
    if(vetD[x] < 0){
      contn++;
    }
  }

  
  return 0;
}

int resultado(){
  int x;
  
  printf("\nVetor A:\n");
  for(x = 0; x < 5; x++){
    printf("A[%d] = %d\n", x, vetA[x]);
  }
  printf("\nVetor B:\n");
  for(x = 0; x < 5; x++){
    printf("B[%d] = %d\n", x, vetB[x]);
  }
  printf("\nVetor C:\n");
  for(x = 0; x < 5; x++){
    printf("C[%d] = %d\n", x, vetC[x]);
  }

  printf("\nVetor D:\n");
  for(x = 0; x < 15; x++){
    printf("D[%d] = %d\n", x, vetD[x]);
  }

  if(contn == 0){
    printf("\nNão foram digitados números negativos.");
  } else if(contn == 1){
    printf("\nFoi exibido %d número negativo.", contn);
  } else {
    printf("\nForam digitados %d negativos.", contn);
  }

  return 0;
}

int main(){
  vetorA();
  vetorB();
  vetorC();
  vetorD();
  resultado();
}

#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex5

/*5.	Receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor. 
Exiba em que posições apareceu o maior número e em que posições apareceu o menor número. 
Se todos os números armazenados no vetor forem iguais informe ao usuário.*/

int vet[10];

int vetor(){
  int x;

  printf("Ex.5: Digite um número até que seja alimentado um vetor de 10 posições.\n");

  for(x = 0; x < 10; x++){
    scanf("%d", &vet[x]);
  } 

  return 0;
}

int maiornum(){
  int x;
  int n = 0;//Responsavel por quardar o maior número

  for(x = 0; x < 10; x++){
    if(vet[x] > n){
      n = vet[x];
    }
  }

  printf("\nMaior número digitado: %d", n);

  return 0;
}

int menornum(){
  int x;
  int n = 0;//Responsavel por quardar o menor número

  for(x = 0; x < 10; x++){
    if(vet[x] < n){
      n = vet[x];
    }
  }

  printf("\nMenor número digitado: %d", n);

  return 0;
}

int main(){
  vetor();
  maiornum();
  menornum();
}

#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex6

/*6.	Leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos em ordem inversa.*/

int vet[6];

int vetor(){
  int x;

  printf("Ex.6: Digite um número até que seja alimentado um vetor de 6 posições.\n");

  for(x = 0; x < 6; x++){
    scanf("%d", &vet[x]);
  }
  return 0;
}

int vetorInverso(){
  int x;

  printf("\nNúmeros digitados, porem inverdidos:\n");
  for(x = 5; x >= 0; x--){
    printf("%d ", vet[x]);
  }
  return 0;
}

int main(){
  vetor();
  vetorInverso();
 
}

#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex7

/*7.	Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de mesmo tipo, 
e cada elemento de B deve ser a metade de cada elemento de A. 
Exiba em que Vetor e em que posições apareceram valores superiores a 4. */

float vetA[10]; 
float vetB[10];


int vetorA(){
  int x;

  printf("Ex.7: Digite um número positivo até que seja alimentado vetor A de 10 posições.\n");
  printf("O vetor B será alimentado com a metade do número corresponente na posição do vetor A.\n");
  printf("Ao final será apresentado em que vetor e em que posições apareceram valores superiores a 4.\n\n");

  for(x = 0; x < 10; x++){
    do{
      scanf("%f", &vetA[x]);
        if(vetA[x] < 0){
          printf("Digite somente números positivos.\n");
      }
    } while (vetA[x] < 0);
    vetB[x] = vetA[x]/2;
  }

  return 0;
}

int vetorB(){
  int x;

  printf("\nElementos do Vetor B:\n");
  
  for(x = 0; x < 10; x++){
    printf("%.1f ", vetB[x]);
  }

  return 0;
}

int maiorQue4A(){
  int x;
  printf("\n\nMaior que 4 no Vetor A:\n");
  for(x = 0; x < 10; x++){
    if(vetA[x] >= 4){  
      printf("A[%d] = %.1f\n", x, vetA[x]);
    }
  }

    printf("\n\nMaior que 4 no Vetor B:\n");
  for(x = 0; x < 10; x++){
    if(vetB[x] >= 4){  
      printf("B[%d] = %.1f\n", x, vetB[x]);
    }
  }

  return 0;
}

int main(){
  vetorA();
  vetorB();
  maiorQue4A();

}
#endif

////////////////////////////////////////////////////////////////////////////////////

#ifdef ex8

/*8.	Efetue a leitura de dez elementos para o vetor A. Construa o vetor B, observando a seguinte lei de formação:
se o valor do índice do vetor for par, o valor do elemento correspondente do vetor A deve ser multiplicado pelo valor 5; 
sendo o índice ímpar, o valor do elemento correspondente do vetor A deverá ser somado ao valor existente o valor 5. 
Mostre o conteúdo dos dois vetores.*/

int vetA[10], vetB[10];

int vetorA(){
  int x;

  printf("Ex.8: Digite um número até que seja alimentado o vetor A de 10\n");
  printf("O vetor B será alimentado da seguinte forma: \nSe a posição do valor A for par, será multiplicado por 5, caso contrario será somado por 5.\n");

  for(x = 0;x < 10; x++){
    scanf("%d", &vetA[x]);
  }
  printf("\nElementos do Vetor A:\n");
  
  for(x = 0; x < 10; x++){
    printf("%d ", vetA[x]);
  }

  return 0;
}

int vetorB(){
  int x;

  for(x = 0;x < 10; x++){
    if(vetA[x] % 2 == 0){
      vetB[x] = vetA[x]*5;
    } else {
      vetB[x] = vetA[x]+5;
    }
  }

  printf("\nElementos do Vetor B:\n");
  for(x = 0; x < 10; x++){
    printf("%d ", vetB[x]);
  }
  return 0;
}

int main(){
  vetorA();
  vetorB();

}

#endif