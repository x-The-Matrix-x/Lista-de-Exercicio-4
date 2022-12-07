//Quest�o 13: Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
//Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
//ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
//anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n; //posi��o at� a qual ser� lida
	int seq = 1, seqA = 0, seqAux; //variaveis para armazenar o numero atual e anterior da sequ�ncia, e uma auxiliar para trocar esses valores
	
	printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
	scanf("%d", &n);
	printf("\n0 ");
	n--;
	
	   while (n) {
		     printf("%d ", seq);
		     seqAux = seq;
		     seq += seqA;
		     seqA = seqAux;
		     n--;
	             }	  
	
	printf("\n\n");
	
	return (0);
}
