/*
    DESAFIO

    O código abaixo é idêntico ao do exercício anterior.
    Modifique-o, dessa vez, para que some cada numero de índice par 
    no vetor e subtraia cada número de índice ímpar.
    Teste seu programa.
*/


#include <stdio.h>

int main() {
    int v[5];
    int soma = 0, i;

    printf("Por favor, digite 5 inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSeus números são:\n");
    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    for (i = 0; i < 5; i++) {
        if((i % 2) == 0){
            soma += v[i];
        }else{
            soma -= v[i];
        }
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}