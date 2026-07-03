#include <stdio.h>

// Desafio Super Trunfo - Países
// 1 - Cadastro das cartas c1

int main() {
  // 1 - Cadastro das cartas c1

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
  
  


  // 2. dados brutos c1
  printf("Informe o nome da cidade A: ");
  scanf(" %99[^\n]", nomeCidadeA);

  printf("Informe o país da cidade A: ");
  scanf(" %99[^\n]", nomePaisA);

  printf("Informe a população A: ");
  scanf("%f", &populacaoA);

  printf("Informe a área A (km²): ");
  scanf("%f", &areaA);

  printf("Informe o PIB A (em milhões de Reais): ");
  scanf("%f", &pibA);

  printf("Informe o número de pontos turísticos A: ");
  scanf("%d", &numero_de_pontos_turisticosA);

  printf("Qual o pib-per-capita A (em Reais por habitante)? ");
  scanf("%f", &pib_per_capitaA);

  printf("Qual é a densidade populacional A (hab/km²)? ");
  scanf("%f", &densidade_populacionalA);


  // 2. dados brutos c2
  printf("\nInforme o nome da cidade B: ");
  scanf(" %99[^\n]", nomeCidadeB);

  printf("Informe o país da cidade B: ");
  scanf(" %99[^\n]", nomePaisB);

  printf("Informe a população B: ");
  scanf("%f", &populacaoB);

  printf("Informe a área B (km²): ");
  scanf("%f", &areaB);

  printf("Informe o PIB B (em milhões de Reais): ");
  scanf("%f", &pibB);

  printf("Informe o número de pontos turísticos B: ");
  scanf("%d", &numero_de_pontos_turisticosB);

  printf("Qual o pib-per-capita B (em Reais por habitante)? ");
  scanf("%f", &pib_per_capitaB);

  printf("Qual é a densidade populacional B (hab/km²)? ");
  scanf("%f", &densidade_populacionalB);

  // 3. contas c1
  densidade_populacionalA = populacaoA / areaA;
  pib_per_capitaA = (pibA * 1000000.0) / populacaoA;

  // 3. contas c2
  densidade_populacionalB = populacaoB / areaB;
  pib_per_capitaB = (pibB * 1000000.0) / populacaoB;


  // 4. dados da cidade c1
  printf("\nCarta cadastrada 1:\n");
  printf("CidadeA: %s\n", nomeCidadeA);
  printf("PaísA: %s\n", nomePaisA);
  printf("PopulaçãoA: %.2f habitantes\n", populacaoA);
  printf("ÁreaA: %.2f km²\n", areaA);
  printf("PIBA: %.2f milhões de Reais\n", pibA);
  printf("Número de pontos turísticosA: %d\n", numero_de_pontos_turisticosA);
  printf("PIB per capitaA: %.2f Reais por habitante\n", pib_per_capitaA);
  // 4. dados da cidade c2
  printf("\nCarta cadastrada 2:\n");
  printf("CidadeB: %s\n", nomeCidadeB);
  printf("PaísB: %s\n", nomePaisB);
  printf("PopulaçãoB: %.2f habitantes\n", populacaoB);
  printf("ÁreaB: %.2f km²\n", areaB);
  printf("PIBB: %.2f milhões de Reais\n", pibB);
  printf("PIB per capitaB: %.2f Reais por habitante\n", pib_per_capitaB);


  // Resultados
  printf("Densidade populacionalA: %.2f hab/km²\n", densidade_populacionalA);
  printf("PIB per capitaA: %.2f Reais por habitante\n", pib_per_capitaA);
  printf("Densidade populacionalB: %.2f hab/km²\n", densidade_populacionalB);
  printf("PIB per capitaB: %.2f Reais por habitante\n", pib_per_capitaB);


  //comparacao
  int resultadoPopulacao = (populacaoA > populacaoB);
  printf("\nA populacao da primeira cidade e maior que a da segunda?: %d\n", resultadoPopulacao);
  int resultadoArea = (areaA > areaB);
  printf("\nA area da primeira cidade e maior que a da segunda?: %d\n", resultadoArea);
  int resultadoPib = (pibA > pibB);
  printf("\nO pib da primeira cidade e maior que o da segunda?: %d\n", resultadoPib);
  int resultadoPontosTuristicos = (numero_de_pontos_turisticosA > numero_de_pontos_turisticosB);
  printf("\nA primeira cidade tem mais pontos turisticos que a segunda?: %d\n", resultadoPontosTuristicos);
  int resultadoPibPerCapita = (pib_per_capitaA > pib_per_capitaB);
  printf("\nO pib per capita da primeira cidade e maior que o da segunda?: %d\n", (pib_per_capitaA > pib_per_capitaB));
  int resultadoDensidadePopulacional = (densidade_populacionalA > densidade_populacionalB);
  printf("\nA densidade populacional da primeira cidade e maior que a da segunda?: %d\n", resultadoDensidadePopulacional);

  return 0;
}