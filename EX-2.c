//Quest�o 2: Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
//naturais de 0 at� N em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N, i;
    
    printf ("Por favor, digite um numero: ");
    scanf("%d", &N);
    
    for(i = N; i >= 0; i--){
        printf("%d ", i);
    }
    return 0;
}
