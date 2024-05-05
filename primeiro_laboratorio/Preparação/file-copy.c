/*
Write a program that create a copy of a file.
The user input two file names
- the name of file to be copied
- copy file name
*/
#include <stdio.h>

int main(){
    FILE *fp, *fc;
    char ch;
    char nome_do_arquivo[20];
    fp = fopen("texto.txt", "r");
    if(fp == NULL){
        printf("O arquivo está vazio!\n");
        system("pause");
        exit(0);
    }
    
    printf("Digite o nome do arquivo: \n");
    scanf("%s.txt", nome_do_arquivo);

    fc = fopen(nome_do_arquivo, "w");
    if(fc==NULL){
        puts("Não foi possível abrir o arquivo!!!");
        system("pause");
        exit(0);
    }

    while(1){
        ch = fgetc(fp);
        if(ch==EOF)break;
        fputc(ch,fc);
    }
    fclose(fp);
    fclose(fc);
    return 0;
}