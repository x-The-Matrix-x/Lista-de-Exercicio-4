//Questão 3: Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
//naturais ímpares (sem usar comando condicional).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N, i;
    
    printf("Por favor, digite um numero: ");
    scanf("%d", &N);
    
    for(i = 1; i <= N; i = i + 2){
        printf("%d ", i);
    }
    return 0;
}
