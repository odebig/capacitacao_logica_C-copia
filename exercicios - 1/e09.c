/*
    Crie um IF/ELSE para checar se a variável digitada pelo usuário é positiva ou negativa.
    Caso seja positiva, exiba uma mensagem informando que o número é positivo.
    Caso seja negativa, exiba uma mensagem informando que o número é negativo.
    Para exibir as mensagens, utilize a função printf().
    Execute o código para testar.
*/
#include <stdio.h>

int main(){
    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero >= 0){
        printf("O número digitado é positivo.\n");
    }else{
        printf("O número digitado é negativo.\n");
    }

    return 0;
}