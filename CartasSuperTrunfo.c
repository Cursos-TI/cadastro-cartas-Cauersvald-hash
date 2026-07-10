#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao;
  int opcaoDuelo1, opcaoDuelo2;
  char nomeCidadeA[100];
  char nomePaisA[100];
  float populacaoA;
  float areaA;
  float pibA;
  int numero_de_pontos_turisticosA;
  float pib_per_capitaA;
  float densidade_populacionalA;

  char nomeCidadeB[100];
  char nomePaisB[100];
  float populacaoB;
  float areaB;
  float pibB;
  int numero_de_pontos_turisticosB;
  float pib_per_capitaB;
  float densidade_populacionalB;
  
  printf("========================\n");
  printf("---- Menu Principal ----\n");
  printf("=========================\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("\n         --- JOGO INICIADO ---\n");

      printf("\n=== INFORME OS DADOS DA PRIMEIRA CIDADE ===\n");
      printf("Informe o nome da cidade A: ");
      scanf("%s", nomeCidadeA); 
      printf("Informe o país da cidade A: ");
      scanf("%s", nomePaisA);
      printf("Informe a população A: ");
      scanf("%f", &populacaoA);
      printf("Informe a área A (km²): ");
      scanf("%f", &areaA);
      printf("Informe o PIB A (em milhões de Reais): ");
      scanf("%f", &pibA);
      printf("Informe o número de pontos turísticos A: ");
      scanf("%d", &numero_de_pontos_turisticosA);

      printf("\n=== INFORME OS DADOS DA SEGUNDA CIDADE ===\n");
      printf("Informe o nome da cidade B: ");
      scanf("%s", nomeCidadeB); 
      printf("Informe o país da cidade B: ");
      scanf("%s", nomePaisB);
      printf("Informe a população B: ");
      scanf("%f", &populacaoB);
      printf("Informe a área B (km²): ");
      scanf("%f", &areaB);
      printf("Informe o PIB B (em milhões de Reais): ");
      scanf("%f", &pibB);
      printf("Informe o número de pontos turísticos B: ");
      scanf("%d", &numero_de_pontos_turisticosB);

      // Cálculos
      densidade_populacionalA = populacaoA / areaA;
      pib_per_capitaA = (pibA * 1000000.0) / populacaoA;

      densidade_populacionalB = populacaoB / areaB;
      pib_per_capitaB = (pibB * 1000000.0) / populacaoB;

      printf("\n** Primeira Cidade: **\n");
      printf("CidadeA: %s\n", nomeCidadeA);
      printf("PaísA: %s\n", nomePaisA);
      printf("PopulaçãoA: %.2f habitantes\n", populacaoA);
      printf("ÁreaA: %.2f km²\n", areaA);
      printf("PIBA: %.2f milhões de Reais\n", pibA);
      printf("Número de pontos turísticosA: %d\n", numero_de_pontos_turisticosA);
      printf("PIB per capitaA: %.2f Reais por habitante\n", pib_per_capitaA);
      printf("Densidade PopulacionalA: %.2f hab/km²\n", densidade_populacionalA);

      printf("\n** Segunda Cidade: **\n");
      printf("CidadeB: %s\n", nomeCidadeB);
      printf("PaísB: %s\n", nomePaisB);
      printf("PopulaçãoB: %.2f habitantes\n", populacaoB);
      printf("ÁreaB: %.2f km²\n", areaB);
      printf("PIBB: %.2f milhões de Reais\n", pibB);
      printf("Número de pontos turísticosB: %d\n", numero_de_pontos_turisticosB);
      printf("PIB per capitaB: %.2f Reais por habitante\n", pib_per_capitaB);
      printf("Densidade PopulacionalB: %.2f hab/km²\n", densidade_populacionalB);
      
      printf("\n===============================================\n");
      printf(" === ESCOLHA DOIS ATRIBUTOS PARA A COMPARACAO ===\n");
      printf("===============================================\n");
      printf("1. Populacao\n");
      printf("2. Area\n");
      printf("3. PIB\n");
      printf("4. Pontos Turisticos\n");
      printf("5. PIB per Capita\n");
      printf("6. Densidade Populacional\n");
      printf("\nEscolha o PRIMEIRO atributo (1-6): ");
      scanf("%d", &opcaoDuelo1);
      printf("Escolha o SEGUNDO atributo (1-6 diferente do primeiro): ");
      scanf("%d", &opcaoDuelo2); 
       
      if (opcaoDuelo1 == opcaoDuelo2){
        printf("\n Voce escolheu duas vezes o mesmo atributo!!! Tchau..\n");
        break; // Adicionado para impedir o avanço do jogo
      }

      printf("\n--- RODADA 1: COMPARANDO O PRIMEIRO ATRIBUTO ---\n");

      switch (opcaoDuelo1) {
        case 1:
          printf("\n- = COMPARACAO DE POPULACAO = -\n");
          if (populacaoA > populacaoB) {
            printf("A Cidade: %s foi a VENCEDORA\n", nomeCidadeA);
          } else if (populacaoB > populacaoA) {
            printf("A Cidade: %s foi a VENCEDORA\n", nomeCidadeB);          
          } else {
            printf("\nAs cidades Empataram na Populacao!\n");
          }
          break;
          
        case 2:
          printf("\n- = COMPARACAO DE AREA = -\n");
          if (areaA > areaB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (areaB > areaA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem a Area do mesmo tamanho!\n");
          }
          break;

        case 3:
          printf("\n- = COMPARACAO DE PIB = -\n");
          if (pibA > pibB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (pibB > pibA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem mesmo PIB!\n");
          }
          break;

        case 4:
          printf("\n- = PONTOS TURISTICOS = -\n");
          if (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (numero_de_pontos_turisticosB > numero_de_pontos_turisticosA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas Empataram!\n");
          }
          break;

        case 5:
          printf("\n- = PIB PER CAPITA = -\n");
          if (pib_per_capitaA > pib_per_capitaB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (pib_per_capitaB > pib_per_capitaA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem mesmo PIB Per Capita!\n");
          }
          break;

        case 6:
          printf("\n- =  Densidade populacional = -\n");
          // Corrigido para menor (<) vencer na densidade
          if (densidade_populacionalA < densidade_populacionalB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (densidade_populacionalB < densidade_populacionalA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem a mesma Densidade Populacional!\n");
          }
          break;

        default:
          printf("##* OPCAO INVALIDA! *##\n");
          break;
      }


    printf("\n--- RODADA 2: COMPARANDO O SEGUNDO ATRIBUTO ---\n");
    switch (opcaoDuelo2) {
        case 1:
          printf("\n- = COMPARACAO DE POPULACAO = -\n");
          if (populacaoA > populacaoB) {
            printf("A Cidade: %s foi a VENCEDORA\n", nomeCidadeA);
          } else if (populacaoB > populacaoA) {
            printf("A Cidade: %s foi a VENCEDORA\n", nomeCidadeB);          
          } else {
            printf("\nAs cidades Empataram na Populacao!\n");
          }
          break;
          
        case 2:
          printf("\n- = COMPARACAO DE AREA = -\n");
          if (areaA > areaB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (areaB > areaA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem a Area do mesmo tamanho!\n");
          }
          break;

        case 3:
          printf("\n- = COMPARACAO DE PIB = -\n");
          if (pibA > pibB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (pibB > pibA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem mesmo PIB!\n");
          }
          break;

        case 4:
          printf("\n- = PONTOS TURISTICOS = -\n");
          if (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (numero_de_pontos_turisticosB > numero_de_pontos_turisticosA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas Empataram!\n");
          }
          break;

        case 5:
          printf("\n- = PIB PER CAPITA = -\n");
          if (pib_per_capitaA > pib_per_capitaB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (pib_per_capitaB > pib_per_capitaA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem mesmo PIB Per Capita!\n");
          }
          break;

        case 6:
          printf("\n- =  Densidade populacional = -\n");
          // Corrigido para menor (<) vencer na densidade
          if (densidade_populacionalA < densidade_populacionalB) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeA);
          } else if (densidade_populacionalB < densidade_populacionalA) {
            printf("A Cidade: === %s === foi a VENCEDORA\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem a mesma Densidade Populacional!\n");
          }
          break;

        default:
          printf("##* OPCAO INVALIDA! *##\n");
          break;
      }
      break; // Esse break finaliza o case 1 do menu inicial

    case 2:
      printf("===============================================\n");
      printf("O jogo é simples quem tem o maior valor vence,\n"
             "com excecao da Densidade Populacional,\n"
             "nesse caso a Carta que tem MENOR densidade Vence!\n");
      printf("===============================================\n");
      break;

    case 3:
      printf("\nSaindo do programa...\n");
      break;

    default:
      printf("\n===== Opcao Invalida! ======\n");
      break;
  }

  return 0;
}