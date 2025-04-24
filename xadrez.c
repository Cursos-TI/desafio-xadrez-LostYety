#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças


int main() {

        //Declaração de variaveis
        int bispo_mov = 5;
        int torre_mov = 5;
        int rainha = 8;
        int c;
        int i = 0;
        int ii = 0;
        int iii = 0;
    
        //Entrada de dados
        printf("INSIRA UMA PEÇA PARA MOVER:\n");
        scanf("%d", &c);

    
        //Estrutura que determina qual peça ira se movimentar
        switch (c)
        {
        case 1:
            {
                //Laço FOR
                for (i = 0; i < bispo_mov; i++){
                    printf("Movimento %d: Cima-direita\n", i+1);
                }
            }
            break;
        
        case 2:
            {
                //Laço WHILE
                while(ii < torre_mov){
                printf("Movimento %d: direita\n", ii+1);
                ii++;
                }
            }
            break;
            
        case 3:
            {
                do
                {
                    //Laço DO-WHILE
                    printf("Movimento %d: Esquerda\n", iii+1);
                    iii++;
                } while ( iii < rainha );
                
            }
        
    
            break;
        
        default:
            break;
        }
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
