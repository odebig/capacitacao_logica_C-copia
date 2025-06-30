/*
    O código a seguir é um jogo simples de adivinhação de números.
    O usuário deve adivinhar um número secreto gerado aleatoriamente entre 1 e 50.
    O programa informa se o palpite é muito baixo, muito alto ou correto,
    e conta o número de tentativas até que o usuário acerte.

    Observe que, quando o bloco de código após o "if" é uma linha única,
    não é necessário usar chaves {}. O mesmo vale para o "else".

    Complete o código com as condições corretas para os IFs.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand(time(NULL));
    secreto = rand() % 50 + 1;

    do {
        printf("Palpite um número (de 1-50): ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite == secreto)
            printf("Parabéns, você acertou com %d tentativas!\n", tentativas);
        else if (palpite < secreto) {
            if (palpite < (secreto - 10))
                printf("Muito baixo!\n");
            else
                printf("Baixo!\n");
        } else {
            if (palpite > (secreto + 10))
                printf("Muito alto!\n");
            else
                printf("Alto!\n");
        }

    } while (palpite != secreto);

    return 0;
}
