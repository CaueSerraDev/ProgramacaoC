#include <stdio.h>

int main()
{
    int dia;

    printf("Escolha um dia da semana de 1 a 7: \n");
    scanf("%d", &dia);

    /*if (dia == 1)
    {
        printf("Hoje é Domingo!\n");
    }else if (dia == 2)
    {
        printf("Hoje é Segunda-feira!\n");
    }else if (dia == 3)
    {
        printf("Hoje é Terça-feira!\n");
    }else if (dia == 4)
    {
        printf("Hoje é Quarta-feira!\n");
    }
    else if (dia == 5)
    {
        printf("Hoje é Quinta-feira!\n");
    }
    else if (dia == 6)
    {
        printf("Hoje é Sexta-feira (sextou!)\n");
    }
    else
    {
        printf("Hoje é Sábado!\n");
    }*/

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("SEGUNDA\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quartou\n");
        break;
    case 6:
        printf("Sextou\n");
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}