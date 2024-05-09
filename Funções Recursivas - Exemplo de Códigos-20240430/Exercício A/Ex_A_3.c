/*
Escreva uma função recursiva para calcular o n-ésimo termo de Fibonacci. 
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de n para calcular o n-ésimo termo de Fibonacci: ");
    scanf("%d", &n);
    
    printf("O %d-ésimo termo de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}
