#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int idade = 17;
    int resultado;

//idade >= 18? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");

//outra forma de fazer é:

resultado = idade >= 18 ? 1 : 0;

if (idade == 1)
{
    printf("Você é maior de idade!\n");
}else {
    printf("Você é menor de idade!\n");
}

}