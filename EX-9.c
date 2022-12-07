//Questão 9: Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, menor, maior;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        if(i == 0){ 
           menor = n;
           maior = n;
            
        }
        
        if(menor > n)
            menor = n;
        if(maior < n)
           maior = n;
           
    }
    
    printf("menor eh  %d, maior eh  %d", menor, maior);
    
    return (0);
}
