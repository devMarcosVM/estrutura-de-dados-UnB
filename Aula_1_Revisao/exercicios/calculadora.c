/*
Usando as estruturas condicionais e de repetição (implemente
um menu), crie um programa de calculadora que lê operações e
valores do usuário e mostre o resultado na tela.
*/

#include <stdio.h>

int main() {
    int operador;
    float a, b, resultado;

    printf("CALCULADORA MAIS PICA DA GALÁXIA! \n\n");
    printf("Escolha um operador: \n 1. Soma \n 2. Subtração \n 3. Multiplicação \n 4. Divisão\n\n");
    printf("Digite sua opção: ");
    scanf("%i", &operador);

    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    switch (operador) {
        case 1:
            resultado = a + b;
            printf("Sua conta resultou no seguinte número: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Sua conta resultou no seguinte número: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Sua conta resultou no seguinte número: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Sua conta resultou no seguinte número: %.2f\n", resultado);
            } else {
                printf("Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break; 
    }
    
    return 0;
}
