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

int Q5(char *NC, int R) {
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for (int i = 0; i < R; i++) {
        fprintf(A, "%s", NC);
    }
    fclose(A);
    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A);
    fclose(A);
    remove("Saida.txt");
    return r;
}

int main() {
    char NOME[] = "marcos vieira marinho";
    int UD = 8;

    long VQ5 = Q5(&NOME[5], UD);
    if (VQ5 != -1) {
        printf("%li\n", VQ5);
    } else {
        printf("Arquivo não abriu\n");
    }
    return 0;
}
