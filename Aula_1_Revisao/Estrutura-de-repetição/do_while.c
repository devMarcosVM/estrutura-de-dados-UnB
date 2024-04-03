/*
do{
    //Bloco de código a ser repetido
} while(condição);
*/
#include <stdio.h>
int main(){
    int i = 1;
    printf("Contagem ascendente: \n");
    do
        printf("%d ", i++);
    while (i <= 5);
    i = 10; printf("Contagem descendente:\n");
    do
        printf("%d ", i--);
    while (i >= 1);
    i = 2; printf("Números pares:\n");
    do
        printf("%d ", i += 2);
    while (i <= 10);
    return 0;
}