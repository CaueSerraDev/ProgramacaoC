#include <stdio.h>

int main() {
//int nota = 5.0;

//if (nota>=6.0)
//{ 
    //printf("Parabens, você foi aprovado!\n");
//}
//printf("Fora if\n");

int numero = 4, resultado;

resultado = numero % 2;

printf("A variável resultado é: %d\n", resultado);

  if (numero % 2 == 0) {
    printf("O número é par\n");
  }

  return 0;

}