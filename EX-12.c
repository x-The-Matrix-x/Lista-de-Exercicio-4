//Quest�o 12: Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 1.000 que s�o
//m�ltiplos de 3 ou 5.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, soma = 0;
    
    for(i = 1; i < 1000; i++){
        if((i % 3 == 0) || (i % 5 == 0))
        soma += i;
    }
    
    printf("Usuario, a soma e %d", soma);
    
    return (0);
}
