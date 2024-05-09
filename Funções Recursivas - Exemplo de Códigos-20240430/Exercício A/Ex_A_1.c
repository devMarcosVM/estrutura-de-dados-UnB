#include <stdio.h>

long int somavet(int *a,int qtde){
    if (qtde == 0){
        return 0;
    }
    return a[qtde - 1] + somavet(a, qtde -1);
}

int main(){
    int a[100];
    int qtde;

    printf("Digite o quantidade de elementos que terá no vetor: \n");
    scanf("%d", &qtde);

    printf("Digite os elementos do vetor separadamente: \n");
    for(int i = 0; i < qtde; i++){
        scanf("%d",&a[i]);
    }

    long int soma = somavet(a, qtde);

    printf("A soma dos elementos do vetor é igual a: %i \n\n", soma);
}