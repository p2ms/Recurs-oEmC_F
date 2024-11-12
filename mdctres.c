#include <stdio.h>
#include <stdlib.h>


int mdc(int n, int m){
    if(n != m){
        if(n<m){
            return mdc(n,m-n);
        }else if(m<n){
            return mdc(m, n-m);
        }
    }else{
        return n;
    }
}
int mdctres(int n, int m, int c){
    mdc(mdc(n,m), c);
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int resul = mdctres(num1, num2, num3);
    printf("o resultado eh: %d", resul);
}