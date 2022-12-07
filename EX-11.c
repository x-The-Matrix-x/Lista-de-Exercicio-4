//Questão 11: Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
//divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i;
    
    printf("Por favor, usuario, digite um numero positivo: ");
    scanf("%d", &n); 
    
    for(i = 1; i <= n; i++){
        if(n % i == 0)
           printf("%d ", i);
    }
    
    return (0);
}
