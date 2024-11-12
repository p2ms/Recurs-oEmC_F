#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Uma função recursiva para inverter uma string. A função deve modificar a string original e não criar uma nova string. 
Considere que a função recebe como parâmetros a string, o índice de início e o índice de fim (ou seja, a posição no array do primeiro e do 
último caracter da string). Faça com que a função main escreva a string antes e depois da chamada da função recursiva.*/

char inverte(char ch[], int i, int f){

    char aux;

    if(i >= f){
        return 1;
    }else{
            aux = ch[i]; 
            ch[i] = ch[f]; 
            ch[f] = aux;  
            inverte(ch, i+1, f-1);
    }
}

int main(){
    char ch[] = "teste";
    int conta = strlen(ch); 
    conta--;
    inverte(ch, 0, conta);
    printf("%s", ch);
}