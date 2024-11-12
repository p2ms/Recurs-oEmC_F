#include <stdio.h>
#include <stdlib.h>


int mdc(int n, int m, int t){
    if(n != m && n!=t && t != m){
        if(n<m){
            if(m<t){
                return mdc(n, m-n, t-m);
            }else if(t<m){
                return mdc(n, m-n, m-t);
            }else if(t == m){
                return mdc(n, t-m, t); //!!!!!!!!!
            }
        }else if(m<n){
            if(n<t){
                return mdc(m, n-m, t-n);
            }else if(t<n){
                return mdc(m, n-m, n-t);
            }else if(n == t){
                return mdc(n, n-m, n-t);
            }
        }
    }else{
        return n;
    }
}

int main(){
    int num1, num2, num3, aux;
    scanf("%d %d %d", &num1, &num2, &num3);
    int resul = mdc(num1, num2, num3);
    printf("o resultado eh: %d", resul);
}