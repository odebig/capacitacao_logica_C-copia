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

<<<<<<< Updated upstream
    if(numero >= 0){
        printf("O número digitado é positivo.\n");
    }else{
        printf("O número digitado é negativo.\n");
    }
=======
    //IF/ELSE:
    if (numero > 0) {
        printf("o número é positivo. \n");
    } else if (numero < 0) {
        printf("o número é negativo. \n");
    } else if {
        printf("o número é zero. \n");
    }
    {
        /* code */
    }
    

>>>>>>> Stashed changes

    return 0;
}

DEU RUIM