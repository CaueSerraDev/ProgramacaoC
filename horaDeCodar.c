#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Digite a umidade: \n");
    scanf("%f", &umidade);

    printf("Digite o estoque atual: \n");
    scanf("%u", &estoque);

if (temperatura < 30)
{
    printf("A temperatura está em condições normais.\n");
}
else {
    printf("Alerta para a temperatura, pode estar muito alta.\n");
}

if (umidade < 40)
{
    printf("Umidade em condições normais\n");
}
else {
    printf("Cuidado! Umidade alta.\n");
}

if (estoque >= estoqueMinimo)
{
    printf("Estoque está bom.\n");
}
else {
    printf("O estoque está a baixo do mínimo.\n");
}

return 0;
}