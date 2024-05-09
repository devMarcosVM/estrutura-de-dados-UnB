#include <stdio.h>

int ehigual(char *a, char *b) {
    // Se as duas strings forem vazias, elas são iguais
    if (*a == '\0' && *b == '\0') {
        return 1;
    }
    
    // Se um dos caracteres for diferente ou se uma string for menor que a outra
    if (*a != *b) {
        return 0;
    }
    
    // Continua verificando os próximos caracteres
    return ehigual(a + 1, b + 1);
}

int main() {
    char a[50], b[50];
    
    printf("Digite a primeira palavra: ");
    scanf("%s", a);
    printf("Digite a segunda palavra: ");
    scanf("%s", b);

    // Verifica se as strings são iguais
    int igual = ehigual(a, b);
    
    if (igual) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
