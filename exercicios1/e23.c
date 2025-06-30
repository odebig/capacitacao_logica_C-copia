/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/

#include <stdio.h>

int main(){
    int num = 0, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++){
        soma += i;
    }

    printf("A soma dos %d primeiros números naturais é: %d\n", num, soma);

    return 0;
}