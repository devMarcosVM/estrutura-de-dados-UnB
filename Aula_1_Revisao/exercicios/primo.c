#include <stdio.h>

int main() {
    int num;
    int i;
    int primo = 1; 

    printf("Digite um número para saber se ele é primo: ");
    scanf("%i", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            primo = 0; 
            break;
        }
    }

    if (primo == 1 && num > 1) {
        printf("O número %d é primo.\n", num);
    } else {
        printf("O número %d não é primo.\n", num);
    }

    return 0;
}
