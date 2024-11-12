#include <stdlib.h>
#include <stdio.h>

int somar(int n, int s, int v){

    if((n/10) == 0){
        return 1;
    }else{
        if(n != 0){
        v = n%10;
        n = n/10;
        s = s + v; 
        somar(n, s, v); 
    }
    }
    printf("%d", s);
}

int main(){
    somar(236, 0, 0);
}