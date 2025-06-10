/*
    O seguinte programa calcula a área de um triângulo.
    Complete-o para que ele funcione corretamente e imprima o resultado com uma casa decimal.
    Ao final, crie um IF/ELSE para verificar se a área é maior que 30:
    caso sim - exiba "Triangulo grande", 
    caso contrário - exiba "Triangulo pequeno".
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base e altura do triângulo, respectivamente: ");
    scanf("%f %f", &base, &altura);

<<<<<<< Updated upstream
    area = base * altura;

    printf("A área do triangulo é: %.1f\n", area);

    (area > 30) ? printf("A área é maior do que 30.\n") : printf("A área não é maior do que 30.\n");

=======
    // Calcule a área do triângulo
    area = (base * altura) / 2;

    // Exiba o resultado formatado com duas casas decimais
    printf("área do trinâgulo: %.1f\n", area);

    // IF/ELSE para verificar se a área é maior que 30
    if (area > 30) {
        printf("triangulo grande\n");
    } else {
        printf("triangulo pqueno\n");
    } 
    
>>>>>>> Stashed changes
    return 0;
}