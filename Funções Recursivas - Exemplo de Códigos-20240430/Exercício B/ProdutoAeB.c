#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    else {
        return a + produto(a, b - 1);
    }
}

int main() {
    int a, b;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("%d x %d = %d\n", a, b, produto(a, b));
    return 0;
}
