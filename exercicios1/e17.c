/*
    DESAFIO

    Crie um programa que:
    - peça ao usuário um número inteiro entre 1 e 10
    - salve esse número em uma variável
    - imprima sua tabuada de multiplicação até 10 usando um for
    - não digite nenhum número fixo no printf() da tabuada

    Dica: a ideia é usar o for para repetir um único printf(), 
    alterando seus valores a cada iteração através do uso de
    variáveis de controle como argumento
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
<<<<<<< Updated upstream
    system("clear");
    int num;

    printf("Digite um inteiro entre 1 e 10: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        int multi = num * i;
=======
    // implementação:
     int numero, i;

    // Solicita o número ao usuário
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf("%d", &numero);

    // Verifica se está no intervalo válido
    if (numero < 1 || numero > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1; // encerra o programa com erro
    }

    // Exibe a tabuada
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
<<<<<<< Updated upstream
>>>>>>> Stashed changes

        printf("%d x %d = %d\n", num, i, multi);
    }
=======

>>>>>>> Stashed changes

    return 0;
}