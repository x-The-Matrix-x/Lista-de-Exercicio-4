//Quest�o 11: Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: Os
//divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66

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
