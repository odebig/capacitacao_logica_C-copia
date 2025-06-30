/*
    Complete o código para que imprima os 10 primeiros números pares usando um loop.
*/

#include <stdio.h>

int main() {
    int i = 0, pares = 0;

    printf("Os 10 primeiros números pares são:\n");
    
    while(pares < 10){
        if(i % 2 == 0){
            printf("%d\n", i);
            pares++;
        }

        i++;
    }
    
    return 0;
}