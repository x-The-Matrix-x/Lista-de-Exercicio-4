//Quest�o 15: Apresente um programa que calcule o valor de qualquer Hn. Em matem�tica, o n�mero
//harm�nico designado por Hn define-se como o en�simo termo da s�rie harm�nica. Ou
//seja:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, n;
    float numeroHarmonico;
    
    
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if (i == 1){
            numeroHarmonico = 1;
            continue;
        }
        numeroHarmonico += (float) 1 / (float) i;
    }
    printf("O numero harmonico para o n-esimo termo  eh %f\n", 
    numeroHarmonico);
    
    return (0);
}
