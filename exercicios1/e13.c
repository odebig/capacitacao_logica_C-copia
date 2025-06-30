/*
    DESAFIO

    Abaixo temos um programa com as variaveis anos, meses, dias e totalDias.
    O objetivo é calcular o total de dias a partir dos anos, meses e dias informados pelo usuário.
    Complete o código para que ele funcione corretamente, realizando as seguintes operações:
    - Leitura dos valores informados pelo usuário
    - Cálculo do total de dias considerando:
        - 1 ano = 365 dias
        - 1 mês = 30 dias
        - 1 dia = 1 dia
    - Exibir o total de dias calculado
    - Calcular o total de semanas a partir do total de dias, considerando:asm
        - 1 semana = 7 dias
    - Exibir o total de semanas calculado
*/

#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;
    float totalSemanas;
<<<<<<< Updated upstream
    
    printf("Digite a quantidade de anos, meses e dias, respectivamente: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    totalDias = (anos * 365) + (meses * 30) + (dias);
    totalSemanas = totalDias / 7;

    printf("Já se passaram %.2f semanas e %d dias.\n", totalSemanas, totalDias);
=======

    // Leitura dos valores informados pelo usuário
    printf("Informe a quantidade de anos: ");
    scanf("%d", &anos);

     printf("Informe a quantidade de meses: ");
    scanf("%d", &meses);

    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);

    // Cálculo do total de dias
     totalDias = (anos * 365) + (meses * 30) + dias;

    // Exibição do total de dias
    printf("Total de dias: %d\n", totalDias);

    // Cálculo do total de semanas
    totalSemanas = totalDias / 7.0;


    // Exibição do total de dias
    printf("Total de semanas: %.2f\n", totalSemanas);

    return 0;
}
    // Cálculo do total de semanas


    // Exibição do total de semanas
    
>>>>>>> Stashed changes

    return 0;

    DEU RUIM