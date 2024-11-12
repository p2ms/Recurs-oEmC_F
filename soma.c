#include <stdio.h>
#include <stdlib.h>

int somar(int n){
    int soma = 0, v = 0;

    if((n/10) == 0){
        return 1;
    }else{
        do{
            v = n%10;
            n = n/10;
            soma += v;  
        }while(n != 0); 

    }

    printf("\n%d\n", soma);
    return soma;
}

int main(){
    somar(8809);
}