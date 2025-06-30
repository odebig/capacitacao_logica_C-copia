/*
    DESAFIO

    Crie um código do 0 que leia um caracter informado pelo usuário e guarde na variável "opcao".
    Em seguida, utilize a estrutura SWITCH para verificar o valor de "opcao" e exibir uma mensagem correspondente:
    - Se "opcao" for A, exiba "Você escolheu Albert Einstein".
    - Se "opcao" for M, exiba "Você escolheu Marie Curie".
    - Se "opcao" for N, exiba "Você escolheu Nikola Tesla".
    - Para qualquer outro valor, exiba "Opção inválida!".

    Obs.: os caracteres devem ser digitados em maiusculo e estar sempre entre aspas simples, como 'A', 'M' ou 'N'.
    (inclusive na estrutura SWITCH)
    Tente digitar o código manualmente, sem copiar e colar. Em caso de dúvida, consulte os exemplos 07 e 17.
*/

#include <stdio.h>

<<<<<<< Updated upstream
<<<<<<< Updated upstream
int main(){
    char opcao;

    printf("Digite uma opção:\n");
    scanf("%c", &opcao);

    switch(opcao){
=======
=======
>>>>>>> Stashed changes
int main() {
    char opcao;

    printf("Digite uma opção (A, M ou N): ");
    scanf(" %c", &opcao);  // O espaço antes do %c evita problemas com enter pendente

    switch(opcao) {
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
        case 'A':
            printf("Você escolheu Albert Einstein.\n");
            break;
        case 'M':
            printf("Você escolheu Marie Curie.\n");
            break;
        case 'N':
            printf("Você escolheu Nikola Tesla.\n");
            break;
        default:
<<<<<<< Updated upstream
<<<<<<< Updated upstream
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
=======
=======
>>>>>>> Stashed changes
            printf("Opção inválida!\n");
    }

    return 0;
}

<<<<<<< Updated upstream
CONFERIR
>>>>>>> Stashed changes
=======
CONFERIR
>>>>>>> Stashed changes
