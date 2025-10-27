#include <stdio.h>


//Bloco de recursividade para o movimento da torre

/* Aqui, Torre dá o nome a função, e movimentoTorre é a declaração da variavel tipo inteira, no qual ela receberá quando for realmente 
declarada na função main principal*/

void Torre(int movimentoTorre){ //retorno void, será chamado a qualquer momento no bloco principal, com variavel inteira declarada
    if(movimentoTorre <= 5){ //limitando a quantidade de vezes que o bloco irá aparecer
    printf("Direita\n"); //Saída no terminal
    Torre(movimentoTorre + 1); //simulando o incremento, somando a variavel quando for atribuida na função
    }
}


//Bloco de recursividade para o movimento da Rainha

/* Aqui, Rainha dá o nome a função, e movimentoRainha é a declaração da variavel tipo inteira, no qual ela receberá quando for realmente 
declarada na função main principal*/
void Rainha(int movimentoRainha){
   if(movimentoRainha <= 8){
    printf("Esquerda\n");
    Rainha(movimentoRainha + 1);
}
}

//Bloco de recursividade para o movimento do Bispo

/* Aqui, Bispo dá o nome a função, e movimentoBispo é duplicado, pois usaremos um loop aninhado, aonde o externo é o movimento vertical,
e o interno o movimento horizontal, eles sao aninhados mas caminham juntos e na mesma quantidade*/


void Bispo(int movimentoBispo,int movimentoBispo2){

    for (movimentoBispo; movimentoBispo <= 5; movimentoBispo++)
    {
        printf("Cima, ");
        for(movimentoBispo2; movimentoBispo2 == movimentoBispo; movimentoBispo2++)
        {
            printf("Direita\n");
        }
    }
}

// Função principal main

int main(){

    //inicialização das variaveis que entrarão nas funções, exceto a de cavalo, pois entra direto no loop
    int movTorre = 1, movBispo = 1, movBispo2 = 1, movRainha = 1, Cavalo = 1, Cavalo2 = 3;

    //Apresentação e saída de dados
    printf("\nMovimentação Torre: \n");
    Torre(movTorre);
    printf("\nMovimentação Bispo: \n");
    Bispo(movBispo, movBispo2);
    printf("\nMovimentação Rainha: \n");
    Rainha(movRainha);

    //loop com duas variaveis e um if para condicionar a saída
    printf("\nMovimentação Cavalo:\n");
    for (Cavalo, Cavalo2; Cavalo <= Cavalo2; Cavalo++, Cavalo2--){
        if(Cavalo <= 2){
            printf("Cima, ");
        }
         if(Cavalo2 == 2){
                printf("Direita\n");
        }

    }

    /*Nesse loop, a condição é, enquanto cavalo for menor que cavalo2, o loop irá repetir, e a condição diz:
    enquanto o cavalo for menor igual a 2, ele irá pra cima, enquanto isso ele é incrementado para finalizar o movimento vertical, 
    enquanto isso, cavalo2 que inicia em 3, será decrementado para satisfazer a segunda condição, que irá fazer o movimento para a direita
    quando cavalo2 for igual a 2*/

        return 0;
}