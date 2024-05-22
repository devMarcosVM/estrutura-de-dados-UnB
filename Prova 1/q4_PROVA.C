#include <stdio.h>
#include <stdlib.h>
#include <string.h>  

int Verifica(char c) {
    if ((c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'))
        return 1;
    else
        return 0;
}

int Q4(char *NC, char L, int pos) {
    if (NC[0] == '\0' || pos < 0 || pos >= strlen(NC) - 1)
        return -1;
    if (NC[pos] == L && Verifica(NC[pos + 1]))
        return pos;
    return Q4(NC, L, pos + 1);
}

int main() {
    char NC[] = "marcos vieira marinho";
    char L = 'o';
    int pos = 0;

    int resultado = Q4(NC, L, pos);
    if (resultado != -1) {
        printf("%d\n", resultado);
    } else {
        printf("%d\n", resultado);
    }

    return 0;
}
