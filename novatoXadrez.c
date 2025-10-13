//Nivel Novato, Movimentação das peças de xadrez

#include <stdio.h>

int main(){
    /*Declaração das variaveis, no qual cada uma tem a respectiva peça no xadrez, e o seu valor atribuido é o ponto de 
    partida dos movimentos de cada peça, essas variaveis serao usadas para controlar os loopings em seus respectivos blocos*/

    int Torre = 1, Bispo = 1, Rainha = 1;

    printf("\n----------- Movimentando peças do xadrez ----------------\n");

    //simulando o movimento da torre, utilizando o laço while
    printf("\nMovimentação da torre, 5 casas para direita: \n");
    while(Torre <= 5){
        printf("Direita\n");
        Torre++;
    }

    //Simulando o movimento do bispo, utilizando o laço do-while
    printf("\nMovimentação do bispo, 5 casas para direita e para cima: \n");
    do{
        printf("Cima, Direita\n");
        Bispo++;

    } while (Bispo <= 5);

    //Simulando o movimento da rainha, utilizando laço For
    printf("\nMovimentação da Rainha, 8 casas para esquerda: \n");
    
    for (Rainha; Rainha <= 8; Rainha++){
        printf("Esquerda\n");
    }

        return 0;
}