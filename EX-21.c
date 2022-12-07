//Questão 21: Uma pesquisa sobre algumas características físicas da população de uma determinada
//região coletou os seguintes dados, referentes a cada habitante:
//a) sexo (m e f);
//b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
//c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
//d) idade em anos
//e) valor do salário.
//Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos
//somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor
//dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100
//anos, inclusive estes e para o salário, não aceitar valores negativos.
//Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com
//idade igual a –1.
//Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com
//idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    float porcentagemFeminina;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[40], corDosOlhos[40], corDoCabelos[40];

    contPorcentagem = 0;
    maiorIdade = 0;
    cont = 0;



    do {
         cont++;
           printf("\nDigite -1 como idade se quiser parar: ");
           printf("\nInforme o sexo: (m e f)\n");
           scanf("%s", &sexo);
           (sexo);

           printf("Informe a cor dos olhos:  (a (azuis), v (verdes), c (castanhos), p (pretos))\n");
           scanf("%s", &corDosOlhos);
           (corDosOlhos);

           printf("Informe a cor dos cabelos: cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos))\n");
           scanf("%s", &corDoCabelos);
           (corDoCabelos);
        
           printf("Informe a idade:\n");
           scanf("%d", &idade);       

                  if ((strcmp (sexo,"f") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp (corDosOlhos,"c") == 0) && (strcmp (corDoCabelos,"c") == 0)) {
                       contPorcentagem++;
                   }
                  if (idade > maiorIdade) {
                      maiorIdade = idade;
                   }
    }
    
        while (idade != -1);
               printf("Maior idade: %d\n", maiorIdade);
    
               porcentagemFeminina = (100 * contPorcentagem)/cont;
               printf("Porcentagem feminina com olhos castanhos, cabelos castanhos que estao entre 18 e 35 anos: %.2f\n", porcentagemFeminina);

} 

