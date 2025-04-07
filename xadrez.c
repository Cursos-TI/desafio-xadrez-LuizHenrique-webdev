#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int j=0, k=0, L=0;                       //declaração de variavel iniciaaando em 0

    printf("JOGO DE XADREZ\n");          //cabeçalho
    printf("    \n");                    //linha em branco/vazio (estetica)
    printf("Torre\n");                   //Torre,  informa os movimentos da torre

    for (int i=0; i<5; i++){
        printf("direita\n");             //escreve direita 5 vezes, ccomeçando a contar a partir do zero //i++ incrementa +1 a  cada loop
    }
    printf("  \n");
    printf ("Bispo\n");                  //Bispo,  informa os movimentos do Bispo

    while(j<5){
        printf("cima-direita\n");       //escreve cima-direita 5 vezes, ccomeçando a contar a partir do zero
        j++;                            //incrementa +1 a cada loop
    }

    printf("  \n");
    printf ("Rainha\n");                 //Rainha,  informa os movimentos da Rainha

    do{
        printf("esquerda\n");            //escreve esquerda 5 vezes, começando a contar a partir do zero
        k++;                             //incrementa +1 a cada loop
    }while (k<8);

    printf(" \n");
    printf ("Cavalo\n");
    
    while(L==0){                         //while  vai repetir enquanto a variavel tiver velor zero //variavel inicialmente começa com valor zero
        printf ("Baixo\n");              //primeiro loop faz os 2 primeiros movimentos
        printf ("Baixo\n");
        for (int G=1; G<2; G++){         //inicia segundo loop
            printf("esquerda\n");        //prime o segundo movimento
        }
        L++;                             //incrementa 1 para a variavel,  que deixa de ser zero, encerrando o loop
    }

                                         //para os movimentos do cavalo poderia ser usado a estrutura do/while para a mesma logica, no entretanto usei while apenas para treinar novas formas
    return 0;
}
