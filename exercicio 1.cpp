/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

    // Verifica qual é o menor valor
    float menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Exibe o menor valor
    printf("O menor valor é: %.2f\n", menor);

    return 0;
}


