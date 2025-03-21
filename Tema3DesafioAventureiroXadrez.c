#include<stdio.h>

int main()
{
            int bispo = 1; //variavel para o Bispo
            int rainha = 1; //variavel para a Rainha
            int esquerda = 1; // varial para o cavalo


         printf("Primeiro movimento: TORRE\n"); 
        for (int i = 1; i <= 5; i++){ // simular o movimento da Torre
            printf("%d - Direita.\n", i);
        }
            printf("\n"); //Quebra linha, para separar as jogadas
            printf("Proxima jogada: Movimento do BISPO.\n");        
        
             while (bispo <= 5){ //simular o movimento do Bispo
                printf("%d - Diagonal.\n", bispo);
                bispo++;
        }
            printf("\n"); //Quebra de linha
            printf("Proxima jogada: Movimento da RAINHA\n");
            do
            {
                printf("%d - Esquerda.\n", rainha );
                rainha++;
            } while (rainha <= 8);

            printf("\n"); //Quebra de linha
            printf("Proxima jogada: movimento do CAVALO\n");

            for (int i = 1; i <= 2; i++)
            {
                printf("%d - Baixo.\n", i); //simula o movimento do cavalo baixo
            }
                while (esquerda <= 1)
                {
                    printf("%d - Esquerda.\n", esquerda);
                    esquerda++;
                }
                
            
        
    
    return 0;
}