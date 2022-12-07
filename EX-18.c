//Quest�o 18: Fa�a um programa que receba um n�mero inteiro maior do que 1 e verifique se o n�mero
//fornecido � primo ou n�o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, divisores = 0;
    
    do{
    	printf("Digite um numero: ");
        scanf("%d", &n);
        if(n < 2){
           printf("\nDigite um número inteiro maior que 1\n");
        }

        for(i = 1; i <= n; i++){
            if(n % i == 0)
               divisores++;
            if(divisores > 2){
               printf("O numero digitado nao e primo\n");
               break;
            }
        }
        
        if (divisores <= 2) {
            printf("O numero digitado e primo\n");
        }
        
    }while(n < 2);
    
    return (0);
}
