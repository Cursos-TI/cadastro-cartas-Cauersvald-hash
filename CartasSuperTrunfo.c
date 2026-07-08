#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// 1 - Cadastro das cartas c1

int main() {
  // 1 - Cadastro das cartas c1

  int opcao;
  int opcaoDuelo;
  char nomeCidadeA [100];
  char nomePaisA[100];
  float populacaoA;
  float areaA;
  float pibA;
  int numero_de_pontos_turisticosA;
  float pib_per_capitaA;
  float densidade_populacionalA;
  

  // 1 - Cadastro das cartas c2

   char nomeCidadeB [100];
   char nomePaisB[100];
   float populacaoB;
   float areaB;
   float pibB;
   int numero_de_pontos_turisticosB;
   float pib_per_capitaB;
   float densidade_populacionalB;
  
  // Impressao do menu
  printf("========================\n");
  printf("---- Menu Principal ----\n");
  printf("=========================\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
    case 1:
      printf("\n         --- JOGO INICIADO ---\n");

      // Dados da cidadeA
      printf("\n=== INFORME OS DADOS DA PRIMEIRA CIDADE ===\n");
      printf("\nInforme o nome da cidade A: ");
      scanf(" %s", nomeCidadeA);
      printf("Informe o país da cidade A: ");
      scanf(" %s", nomePaisA);
      printf("Informe a população A: ");
      scanf("%f", &populacaoA);
      printf("Informe a área A (km²): ");
      scanf("%f", &areaA);
      printf("Informe o PIB A (em milhões de Reais): ");
      scanf("%f", &pibA);
      printf("Informe o número de pontos turísticos A: ");
      scanf("%d", &numero_de_pontos_turisticosA);
      printf("Informe o Pib Per Capita A: ");
      scanf("%f", &pib_per_capitaA);
      printf("Informe a Densidade Populacional A: \n");
      scanf("%f", &densidade_populacionalA);

    // Dados da cidadeB
    printf("\n=== INFORME OS DADOS DA SEGUNDA CIDADE ===\n");
      printf("\nInforme o nome da cidade B: ");
      scanf(" %s", nomeCidadeB);
      printf("Informe o país da cidade B: ");
      scanf(" %s", nomePaisB);
      printf("Informe a população B: ");
      scanf("%f", &populacaoB);
      printf("Informe a área B (km²): ");
      scanf("%f", &areaB);
      printf("Informe o PIB B (em milhões de Reais): ");
      scanf("%f", &pibB);
      printf("Informe o número de pontos turísticos B: ");
      scanf("%d", &numero_de_pontos_turisticosB);
      printf("Informe o Pib Per Capita B: ");
      scanf("%f", &pib_per_capitaB);
      printf("Informe a Densidade Populacional B: ");
      scanf("%f", &densidade_populacionalB);


      // 3. contas c1
      densidade_populacionalA = populacaoA / areaA;
      pib_per_capitaA = (pibA * 1000000.0) / populacaoA;

      // 3. contas c2
      densidade_populacionalB = populacaoB / areaB;
      pib_per_capitaB = (pibB * 1000000.0) / populacaoB;

      // 4. dados da cidade c1

      printf("\n** Carta cadastrada 1: **\n");
      printf("CidadeA: %s\n", nomeCidadeA);
      printf("PaísA: %s\n", nomePaisA);
      printf("PopulaçãoA: %.2f habitantes\n", populacaoA);
      printf("ÁreaA: %.2f km²\n", areaA);
      printf("PIBA: %.2f milhões de Reais\n", pibA);
      printf("Número de pontos turísticosA: %d\n", numero_de_pontos_turisticosA);
      printf("PIB per capitaA: %.2f Reais por habitante\n", pib_per_capitaA);
      printf("Densidade PopulacionalA: %.2f\n", densidade_populacionalA);

      // 4. dados da cidade c2

      printf("\n** Carta cadastrada 2: **\n");
      printf("CidadeB: %s\n", nomeCidadeB);
      printf("PaísB: %s\n", nomePaisB);
      printf("PopulaçãoB: %.2f habitantes\n", populacaoB);
      printf("ÁreaB: %.2f km²\n", areaB);
      printf("PIBB: %.2f milhões de Reais\n", pibB);
      printf("Número de pontos turísticosA: %d\n", numero_de_pontos_turisticosB);
      printf("PIB per capitaB: %.2f Reais por habitante\n", pib_per_capitaB);
      printf("Densidade PopulacionalB: %.2f\n", densidade_populacionalB);
      
      // === 5. MENU DO DUELO ===
      printf("===============================================\n");
      printf("\n=== ESCOLHA UM ATRIBUTO PARA A COMPARACAO ===\n");
      printf("===============================================\n");
      printf("1. Populacao\n");
      printf("2. Area\n");
      printf("3. PIB\n");
      printf("4. Pontos Turisticos\n");
      printf("5. PIB per Capita\n");
      printf("6. Densidade Populacional\n");
      printf("Escolha o atributo (1-6): ");
      scanf("%d", &opcaoDuelo);

      switch (opcaoDuelo) {
        case 1:
          printf("\n- = COMPARACAO DE POPULACAO = -\n");
          printf("\n      --- RESULTADO: ---\n");
          if (populacaoA > populacaoB) {
            printf("\nVencedor: Cidade A (%.2f)!\n", nomeCidadeA);
          } else if (populacaoB > populacaoA) {
            printf("\nVencedor: Cidade B (%.2f)!\n", nomeCidadeB);
          } else {
            printf("\nAs cidades tem a mesma quantia na Populacao!\n");
          }
          break;

        case 2:
          printf("\n- = COMPARACAO DE AREA = -\n");
          printf("\n    --- RESULTADO: ---\n");
          if (areaA > areaB) {
            printf("\nVencedor: Cidade A (%.2f)!\n", nomeCidadeA);
          } else if (areaB > areaA) {
            printf("\nVencedor: Cidade B (%.2f)!\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades tem a Area do mesmo tamanho!\n");
          }
          break;

        case 3:
          printf("\n- = COMPARACAO DE PIB = -\n");
          printf("\n    --- RESULTADO: ---\n");
          if (pibA > pibB) {
            printf("\nVencedor Cidade A (%.2f)!\n", nomeCidadeA);
          } else if (pibB > pibA) {
            printf("\nVencedor Cidade B (%.2f)!\n", nomeCidadeB);
          } else {
            printf("\nAs cidades tem o mesmo PIB!\n");
          }
          break;

        case 4:
          printf("\n- = PONTOS TURISTICOS = -\n");
          printf("\n    --- RESULTADO: ---\n");
          if (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB) {
            printf("\nVencedor Cidade A (%d)!\n", nomeCidadeA);
          } else if (numero_de_pontos_turisticosB > numero_de_pontos_turisticosA) {
            printf("\nVencedor Cidade B (%d)!\n", nomeCidadeB);
          } else {
            printf("\nAs duas cidades empataram!\n");
          }
          break;

        case 5:
          printf("\n- = PIB PER CAPITA = -\n");
          printf("\n  --- RESULTADO: ---\n");
          if (pib_per_capitaA > pib_per_capitaB) {
            printf("\nA vencedora e a Cidade A (%.2f)!\n", nomeCidadeA);
          } else if (pib_per_capitaB > pib_per_capitaA) {
            printf("\nA Cidade B e a vencedora (%.2f)!\n", nomeCidadeB);
          } else {
            printf("\nAs cidades empataram!\n");
          }
          break;

        case 6:
          printf("\n- =  Densidade populacional = -\n");
          printf("\n       --- RESULTADO: ---\n");
          if (densidade_populacionalA < densidade_populacionalB) {
            printf("\nVencedor: Cidade A (%.2f) com menor densidade!\n", nomeCidadeA);
          } else if (densidade_populacionalB < densidade_populacionalA) {
            printf("\nVencedor: Cidade B (%.2f) com menor densidade!\n", nomeCidadeB);
          } else {
            printf("Empate na densidade populacional!\n");
          }
          break;

        default:
          printf("##** OPCAO INVALIDA! **##\n");
          break;
      }
     
      /*printf("\nDensidade populacionalA: %.2f hab/km²\n", densidade_populacionalA);
      printf("PIB per capitaA: %.2f Reais por habitante\n", pib_per_capitaA);
      printf("Densidade populacionalB: %.2f hab/km²\n", densidade_populacionalB);
      printf("PIB per capitaB: %.2f Reais por habitante\n", pib_per_capitaB);

      int resultadoPopulacao = (populacaoA > populacaoB);
      printf("\nA populacao da primeira cidade e maior que a da segunda?: %d\n", resultadoPopulacao);
      int resultadoArea = (areaA > areaB);
      printf("\nA area da primeira cidade e maior que a da segunda?: %d\n", resultadoArea);
      int resultadoPib = (pibA > pibB);
      printf("\nO PIB da Primeira Cidade e Maior que da Segunda?: %d\n", resultadoPib);
      int resultadoPontosTuristicos = (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB);
      printf("\nA primeira cidade tem mais pontos turisticos que a segunda?: %d\n", resultadoPontosTuristicos);
      int resultadoPibPerCapita = (pib_per_capitaA > pib_per_capitaB);
      printf("\nO pib per capita da primeira cidade e maior que o da segunda?: %d\n", resultadoPibPerCapita);
      int resultadoDensidadePopulacional = (densidade_populacionalA > densidade_populacionalB);
      printf("\nA densidade populacional da primeira cidade e maior que a da segunda?: %d\n", resultadoDensidadePopulacional);

      
      printf("\n----- Resumo das Estatisticas.-----\n");

      if (populacaoA > populacaoB) {
        printf("A Primeira Cidade tem MAIS Habitantes.\n");
      } else {
        printf("A segunda cidade tem MAIS Habitantes.\n");
      }

      if (areaA > areaB) {
        printf("A area da primeira cidade e maior doque da segunda\n");
      } else {
        printf("A area da segunda cidade Venceu\n");
      }

      if (pibA > pibB) {
        printf("O PIB da primeira cidade e Maior\n");
      } else {
        printf("O PIB da segunda cidade e Maior\n");
      }

      if (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB) {
        printf("A primeira cidade te mais Pontos Turisticos.\n");
      } else {
        printf("A segunda cidade tem mais Pontos Turisticos.\n");
      }

      if (pib_per_capitaA > pib_per_capitaB) {
        printf("O Pib Percapita da primeira cidade e Maior.\n");
      } else {
        printf("O Pib Percapita da segunda cidade e Maior.\n");
      }

      if (densidade_populacionalA < densidade_populacionalB) {
        printf("A Densidade Populacional da primeira cidade e Maior.\n");
      } else {
        printf("A Densidade Populacional da segunda cidade e Maior.\n");
      }
      break;/**/
    break;
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