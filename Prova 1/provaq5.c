#include <stdio.h>


long Q5(char *NC, int R){ //recebe um ponteiro para uma string e um inteiro
    long r;
    FILE *A = fopen("Saida.txt", "w"); //arquivo aberto para escrita
    for(int i = 0; i<R; i++){ //repete r vezes
        fprintf(A, "%s", NC);
        /*%recebe um ponteiro para um arquivo,
           s é formato de string e NC é a nossa string, ele printara 5 vezes a string*/

    }
    fclose(A);// fecha o arquivo
    A = fopen("Saida.txt", "r"); //abre o arquivo agora para leitura
    fseek(A, 0, SEEK_END);// altera a posição de um ponteiro, ela recebe um ponteiro para um arquivo, 
    //um deslocamento especifico, no caso é seek_end que é o final do arquivo, pdoeria ser seekset, incicio do arquivo
    r = ftell(A); // função para obter a posição atual do ponteiro, como ele está no final, receberá o tamanho do arquivo   
    //cada char tem 1 byte, então o tamanho do arquivo é o numero de bytes
    fclose(A);//fech    a o arquivo
    return r;

}

int main(){
    char NC[28] = "marcos vieira marinho";
    int R = 9;
    printf("O arquivo tem %ld bytes\n", Q5(NC, R));
    return 0;
}

