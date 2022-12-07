//Questão 18: Faça um programa que receba um número inteiro maior do que 1 e verifique se o número
//fornecido é primo ou não

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, divisores = 0;
    
    do{
    	printf("Digite um numero: ");
        scanf("%d", &n);
        if(n < 2){
           printf("\nDigite um nÃºmero inteiro maior que 1\n");
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
