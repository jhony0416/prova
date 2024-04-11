#include <stdio.h>

int main() {
    float num1, num2, num3;

    // Solicita os três valores ao usuário
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    // Verifica qual é o maior valor
    float maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    // Exibe o maior valor
    printf("O maior valor é: %.2f\n", maior);

    return 0;
}


