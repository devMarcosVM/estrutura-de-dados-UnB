#include <stdio.h>

int ackermann_recursivo(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    else if (m > 0 && n == 0) {
        return ackermann_recursivo(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        return ackermann_recursivo(m - 1, ackermann_recursivo(m, n - 1));
    }
}

int main() {
    int m, n;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &m, &n);
    int resultado = ackermann_recursivo(m, n);
    printf("O valor da função de Ackermann para m=%d e n=%d é %d\n", m, n, resultado);
    return 0;
}