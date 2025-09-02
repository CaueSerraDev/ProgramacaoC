#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:  
    // Inicializa o gerador de números aleatórios com base no horário atual
    // Isso garante que cada execução do programa gere números diferentes
    srand(time(0));

    // Gera um número aleatório entre 1 e 10
    // rand() gera um número grande aleatório, e o operador % 10 pega o resto da divisão por 10 (0 a 9)
    // Somando +1, o intervalo passa a ser de 1 a 10
    numeroSecreto = rand() % 10 + 1;

    // Exibe uma mensagem pedindo para o usuário tentar adivinhar o número
    printf("Adivinhe o número (entre 1 e 10): \n");

    // Lê o palpite digitado pelo usuário e armazena na variável "palpite"
    scanf("%d", &palpite);

    // Verifica se o palpite do usuário é igual ao número secreto
    if (palpite == numeroSecreto) {
        // Caso o usuário acerte
        printf("Parabéns! Você acertou!\n");
    } else {
        // Caso o usuário erre, mostra o número correto
        printf("Você errou. O número era %d.\n", numeroSecreto);
    }

    // Finaliza o bloco do "case 1" dentro de um switch
    break;


    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

    return 0;
}