//Quest�o 1: Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
//naturais de 0 at� N em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N, i;
    
    printf("Digite um n�mero, por favor: ");
    scanf("%d", &N);
    
    for(i = 0; i <= N; i++){
    	printf("%d", i);
    }
    return 0;
}
