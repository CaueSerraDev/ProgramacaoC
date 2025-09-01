#include <stdio.h>

int main() {
    int idade;
    float nota;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua nota: \n");
    scanf("%f", &nota);


    //analisando a idade
    if (idade < 12)
    {
        printf("Você é uma criança!\n");
    }
    else if (idade >= 12 && idade < 18)
    {
        printf("Você é um adolescente!\n");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Você é um adulto!\n");
    }
    else
    {
        printf("Você é um idoso!\n");
    }

    //analisando a nota
    if (nota >= 9.0)
    {
        printf("Conceito A!\n");
    }else if (nota >= 8.0)
    {
        printf("Conceito B!\n");
    }else if (nota >= 7.0)
    {
        printf("Conceito C!\n");
    }else if (nota >=6.0)
    {
        printf("Conceito D\n");
    }else {
        printf("Conceito F\n");
    }
    

    return 0;
}