#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Uma função recursiva que cresce muito rapidamente. A função de Ackermann A(m,n) é definida para números inteiros não negativos m e n 
da seguinte forma:

A(m,n) = 
    n + 1                  se m = 0
    A(m-1, 1)              se m > 0 e n = 0
    A(m-1, A(m, n-1))      se m > 0 e n > 0
*/
int m,n;
int A(int m, int n){
    if(m == 0){
        n + 1;
        //A(m, n);
        printf("caso um: %d %d", m, n);
    }else if( m > 0 && n == 0){
        A(m-1,1);
        printf("caso dois: %d %d", m, n);
    }else if(m > 0 && n > 0){
        A(m-1, A(m,n-1));
        printf("caso tres: %d %d", m, n);
    }
}

int main(){
    A(5, 3);
    printf("%d %d", m, n);
}