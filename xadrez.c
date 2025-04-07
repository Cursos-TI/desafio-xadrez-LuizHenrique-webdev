#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MoverTorre(int i){
    if(i>0){
        printf("Direita\n");
        MoverTorre(i-1);
    }
}

void MoverBispo(int j){
    if (j>0){
        
        for (int k=0; k<1; k++){
            printf("Cima ");
            for (int l=0; l<1; l++){
                printf("Direita\n");
            }
            
        } 
        MoverBispo(j-1);
    }
    
}

void MoverRainha(int k){
    if(k>0){
        printf("esquerda\n");
        MoverRainha(k-1);
    }
}

int main() {
    int Torre=8, Bispo=5, Rainha=8;      //declaração de variavel

    printf("JOGO DE XADREZ\n");          //cabeçalho
    printf("    \n");                    //linha em branco/vazio (estetica)
    printf("Torre\n");                   //Torre,  informa os movimentos da torre

    MoverTorre(Torre);                   //procedimento/função é chamada para executar os  movimentos da  Torre

    printf("  \n");
    printf ("Bispo\n");                  //Bispo,  informa os movimentos do Bispo

    MoverBispo(Bispo);                   //procedimento/função é chamada para executar os  movimentos do bispo

    printf("  \n");
    printf ("Rainha\n");                 //Rainha,  informa os movimentos da Rainha

    MoverRainha(Rainha);                 //procedimento/função é chamada para executar os  movimentos da  Rainha

    printf(" \n");
    printf ("Cavalo\n");
    
    for (int L=0,  M=0; L<1, M<1; L++, M++){    //repetição complexa com duas variaveis 
        printf("cima\n");                       // cavalo sempre terá dois movimetos verticais iguais (cima-cima ou baixo-baixo) //para o exigido era cima-cima
        printf("cima\n");
        if((L && M) >=0){                       //se os dois movimentos verticais forem executados, inicia o movimento horizontal 
            for (int N=0; N<1; N++){            //repetição aninhada para movimento horizointal 
                printf("Direita\n");            //um movimento para horizontal (exigido direita)
            }
        }continue;                              //controla o loop condicional
    }

                                         
    return 0;
}
