
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a temperatura em graus Celsius ao usuário
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte a temperatura para Fahrenheit usando a fórmula
    fahrenheit = celsius * (9.0/5.0) + 32.0;

    // Exibe o resultado
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}


