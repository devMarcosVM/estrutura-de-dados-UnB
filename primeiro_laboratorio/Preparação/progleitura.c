#include <stdio.h>

int main(){
    FILE *arquivo;
    char ch;
    int contagem = 1;
    arquivo = fopen("texto.txt","r");
    if(arquivo == NULL){
        printf("O arquivo está vazio!\n");
        system("pause");
        exit(0);
    }
    while(1)
    {
        ch = fgetc(arquivo);
        if(ch == EOF){
            break;
        }
    contagem++;
    }
    printf("O arquivo contém %d caracteres", contagem);
    fclose(arquivo);
    return 0;
}