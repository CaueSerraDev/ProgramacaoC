#include <stdio.h>

int main() {
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.5;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valortotalA;
double valortotalB;

int resultadoA, resultadoB;

//exibir as informações dos proodutos;
printf("Produto %s tem estoque %u e valor unitario R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e valor unitario R$ %.2f\n", produtoB, estoqueB, valorB);

//comparações com o valor mínimo de estoque;
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque mínimo %u\n", produtoA, resultadoA);
printf("O produto %s tem estoque mínimo %u\n", produtoB, resultadoB);

//comparações entre os valores totais dos produtos;
printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, 
                                        estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));



return 0;
}