/*
    O programa abaixo faz a leitura de 5 inteiros e os armazena em um vetor.
    Em seguida, imprime os dados contidos no vetor e soma todos.
    Os comentário foram usados apenas para explicar o que cada parte do código faz.
    Execute esse programa, teste, depois modifique-o para que leia 10 inteiros.
    A funcionalidade deve permanecer a mesma.
    Teste seu programa.
*/


#include <stdio.h>

int main() {
    int v[10];
    int soma = 0, i;

    printf("Por favor, digite 10 inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nSeus números são:\n");
    for (i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    for (i = 0; i < 10; i++) {
        soma += v[i];
    }
    printf("A soma dos números é: %d\n", soma);

    return 0;
}