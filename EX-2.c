//Questão 2: Faça um programa que leia um número inteiro positivo N e imprima todos os números
//naturais de 0 até N em ordem decrescente.

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
