//Quest�o 4: Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3 considerando
//n�meros maiores que 0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n = 0, i; 
    
   for(i = 1; n < 5; i++){
       if(i % 3 == 0){
            printf("%d ", i);
            n++;
        }
    }
    
    return (0);
}
