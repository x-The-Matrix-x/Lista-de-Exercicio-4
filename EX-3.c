//Quest�o 3: Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros
//naturais �mpares (sem usar comando condicional).

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
