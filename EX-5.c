//Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, soma = 0;
    
    for(i=1; i <= 100; i++){
    	if(i % 2 == 0)
    	soma+=i;	
	}
	printf("A soma dos 50 primeiros numeros eh: %d\n", soma);
	
	return (0);
}
