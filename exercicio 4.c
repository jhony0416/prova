
 #include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Solicita os três lados do triângulo ao usuário
    printf("Digite o comprimento do lado 1: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do lado 2: ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do lado 3: ");
    scanf("%f", &lado3);

    // Verifica se o triângulo é equilátero, isósceles ou escaleno
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}


