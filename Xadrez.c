#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Torre \n");
        printf("2. Bispo \n");
        printf("3. Rainha \n");
        printf("4. Sair \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
             
                 printf("\nVoce escolheu Torre \n");
                 printf("--- Torre ---\n");
             for (int t = 0; t < 5; t++)
             {
                 printf("Direita\n");
             }
                 printf("\n");

                break;
            
                case 2:
             
                 printf("Você escolheu Bispo \n");
                 printf("--- Bispo ---\n");
                 int b = 0;
                 while (b < 5) {
                 printf("Cima, Direita\n");
                 b++;
             }
                printf("\n");
                
             break;
            
                case 3:
                
                 printf("Você escolheu Rainha\n");
                 printf("--- Rainha ===\n");
                 int r = 0;
                do{
                 printf("Esquerda \n");
                 r++;
                 } while (r < 8);
                 printf("\n");
                
             break;

            case 4:
                 printf("Saindo...\n");

                break;
            
                default:
                printf("Opção inválida!\n");
        }
    } while (option != 4);
   
    return 0;
}