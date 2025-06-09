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
    system("clear");
    int num;

    printf("Digite um inteiro entre 1 e 10: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        int multi = num * i;

        printf("%d x %d = %d\n", num, i, multi);
    }

    return 0;
}