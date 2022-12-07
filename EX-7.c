//Questão 7: Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e
//apresente o resultado na tela.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int cont, n, soma = 0;
    
    
    for(cont = 0; cont < 10; cont++){
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("%d", soma);
    
    return (0);
}
