#include <stdio.h>
#include <stdlib.h>


int mdc(int n, int m){
    if(n != m){
        if(n<m){
            return mdc(n,m-n);
        }else if(m<n){
            return mdc(m, n-m);
        }
        printf("continuando ");
    }else{
        return n;
        printf("OI");
    }
}

int main(){
    int num1, num2, aux;
    scanf("%d %d", &num1, &num2);
    int resul = mdc(num1, num2);
    printf("o resultado eh: %d", resul);
}