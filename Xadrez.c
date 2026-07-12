#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Torre \n");
        printf("2. Bispo \n");
        printf("3. Rainha \n");
        printf("4. Cavalo \n");
        printf("5. Sair \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
             
                 printf("--- Torre ---\n");
             for (int t = 0; t < 5; t++)
             {
                 printf("Direita\n");
             }
                 printf("\n");

                break;
            
                case 2:
             
                 printf("--- Bispo ---\n");
                 for (int bp = 1; bp <= 5; bp++)
                 {
                  printf("Cima\n");

                 int b = 1;
                 while (b <= 1) {
                 printf("Direita\n");
                 b++;
             }
             }  
             break;
            
                case 3:
            
                 printf("=== Rainha ===\n");
                 int r = 0;
                do{
                 printf("Esquerda \n");
                 r++;
                 } while (r < 8);
                 printf("\n");
                
             break;

            case 4:

            printf("--- Cavalo ---\n");
            printf("\n");
            int c;
            int cl = 1;
            
            for (c = 1; c <= 1; c++){
                cl = 1;
                while (cl <= 2){
                printf("Baixo\n");
                cl++;
                }
                printf("Esquerda\n");
                 printf("\n");
            }
             break;


            case 5:
                 printf("Saindo...\n");

                break;
            
                default:
                printf("Opção inválida!\n");
        }
    } while (option != 5);
   
    return 0;
}