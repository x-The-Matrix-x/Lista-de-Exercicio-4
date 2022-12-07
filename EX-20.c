//Questão 20: Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
//apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
//deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a
//quantidade de frutas. Ao final, apresente o valor total da compra.
//1 => ABACAXI – 5,00 a unidade
//2 => MAÇA – 1,00 a unidade
//3 => PERA – 4,00 a unidade

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char e;
    int soma = 0, quantidadeAbacaxi = 0, quantidadeMaca = 0, quantidadePera = 0;
    int *p = &soma;
    
    
    do{
        
        
    printf("\nEscolha e compre uma fruta fresquinha: \n\n(1) Abacaxi = 5,00\n(2) Maca = 1,00\n(3) Pera = 4,00\n\nDigite 0 para finalizar as compras: \n ");
           setbuf(stdin,NULL);
           scanf("%c", &e);


        switch (e){
            case '1': 
                printf("\nQuantos abacaxis? ");
                scanf("%d", &quantidadeAbacaxi);
                *p += quantidadeAbacaxi * 5;  
                break;
            
            case '2': 
                printf("\nQuantas macas? ");
                scanf("%d", &quantidadeMaca);
                *p += quantidadeMaca * 1;  
                break;
            
            case '3': 
                printf("\nQuantas peras? ");
                scanf("%d", &quantidadePera);
                *p += quantidadePera * 4;  
                break;
            
            
            case '0':                 
                break;

            default: 
                printf("\nEscolha invalida\n");
                break;
        }
        
        }while(e != '0');

printf("\nO valor total da compra foi de %d", *p);


} 



