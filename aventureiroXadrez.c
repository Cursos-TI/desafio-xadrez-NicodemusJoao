//Nivel Aventureiro, Movimentação das peças de xadrez

#include <stdio.h>

int main(){
    /*Declaração das variaveis, no qual cada uma tem a respectiva peça no xadrez, e o seu valor atribuido é o ponto de 
    partida dos movimentos de cada peça, essas variaveis serao usadas para controlar os loopings em seus respectivos blocos*/

    int Torre = 1, Bispo = 1, Rainha = 1, Cavalo1 = 1, Cavalo2=1;

    printf("\n----------- Movimentando peças do xadrez ----------------\n");

    //simulando o movimento da torre, utilizando o laço while, 5 casas para direita

    printf("\nMovimentação da torre: \n");
    while(Torre <= 5){ //condição que determinará a quantidade de repetições, até 5
        printf("Direita\n");  //saída no console
        Torre++;  //incremento na variavel, ou seja, Torre + 1
    }
    /*Na movimentação da torre, a variavel de inicialização torre começa com 1, e sera incrementada +1 a cada repetição, 
    totalizando 5 repetições teoricamente para a direita*/


    //Simulando o movimento do bispo, utilizando o laço do-while, 5 casas pra cima e para direita
    printf("\nMovimentação do bispo: \n");
    do{
        printf("Cima, Direita\n"); //saída no console
        Bispo++; //incremento na variavel, ou seja, Bispo + 1

    } while (Bispo <= 5); //condição que determinará a quantidade de repetições, até 5

    /*Na movimentação do bispo, a variavel de inicialização bispo começa com 1, e sera incrementada +1 a cada repetição, 
    totalizando 5 repetições igual a torre, a diferença é que , pelo uso do Do-while, está garantida pelo
    menos uma vez, a saída uma vez no terminal do print*/



    //Simulando o movimento da rainha, utilizando laço For, 8 casas pra esquerda
    printf("\nMovimentação da Rainha: \n");
    
    for (Rainha; Rainha <= 8; Rainha++){ //Respectivamente: inicialização da Rainha, condição que determina as repetições, incremento Rainha +1
        printf("Esquerda\n"); //saída no console
    }

    /*Na movimentação da Rainha, o uso do loop for deixa mais organizado e prático, tudo é declarado no seu "Cabeçalho", e conforme foi declarado,
    teremos 8 repetições, iniciando a Rainha no 1, para a esquerda*/



    //simulando o movimento do cavalo, com loops aninhados, um será for e outro while, 2 casas para baixo e uma para esquerda
    printf("\nMovimentação do Cavalo: \n");

    for (Cavalo1; Cavalo1 <= 1; Cavalo1++) //Primeiro loop declarado, representando o movimento para a esquerda
    {
        while(Cavalo2 <=2){ //segundo loop , representando movimento 2 vezes para baixo
            printf("Baixo, "); //Saída do segundo loop, que terá 2 repetiçoes conforme a condição manda
            Cavalo2++; //incremento na variavel de controle do segundo loop
        }
        printf("Esquerda"); /*saída do primeiro loop, que ocorrerá ao final de todo o segundo loop, 
        e conforme o primeiro loop declara, apenas uma repetição*/
    }

    return 0;
}