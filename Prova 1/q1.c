#include <stdio.h>
#include <stdlib.h>

int main(){
    long int valor = 222021890;
    int *ptr, *pnumeros, pn=valor%10, pp, psoma=0;
    if(pn<2) pn = 5 - pn;
    pnumeros = (int*)malloc(pn*sizeof(int));
    ptr = pnumeros;
    for (pp=0;pp<pn;pp++){
        *ptr = valor % 10; valor = valor/10; ptr++;
    }
    for(pp=0;pp<pn;pp++){
        if((pnumeros[pp]%2) == 1) psoma * psoma*pnumeros[pp];
    }
    printf("%d",psoma);
    return 0;    
}