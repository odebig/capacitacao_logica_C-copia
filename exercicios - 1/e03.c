/*
    Utilizando operadores relacionais,
    compare se o valor de A é maior que B e
    salve o resultado da comparação em result
*/

#include <stdio.h>

int main() {
    float A = 4 / 7;
    float B = 3 / 5;
    int result;

    if(A > B){
        result = A;
    }else{
        result = B;
    }

    if (result == 0) {
        printf("O resultado está correto, muito bem!!\n");
    } else {
        printf("O resultado está incorreto, verifique seu código!\n");
    }

    return 0;
}