//Fa�a um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
//terminando em 0. Mostre uma mensagem �FIM!� ap�s a contagem.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    
    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
    
    printf("FIM!");  
	  
    return (0);
}
