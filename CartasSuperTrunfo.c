#include <stdio.h>

// Desafio Super Trunfo - Países
// 1 - Cadastro das cartas

int main() {
  // // variáveis
  
  char nomeCidade [100];
  char nomePais [100];
  float populacao;
  float area;
  float pib;
  int numero_de_pontos_turisticos;
  float pib_per_capita;
  float densidade_populacional;

  // // 2. dados brutos
  printf("Informe o nome da cidade: ");
  scanf(" %99[^\n]", nomeCidade);

  printf("Informe o país da cidade: ");
  scanf(" %99[^\n]", nomePais);

  printf("Informe a população: ");
  scanf("%f", &populacao);

  printf("Informe a área (km²): ");
  scanf("%f", &area);

  printf("Informe o PIB (em milhões de dólares): ");
  scanf("%f", &pib);

  printf("Informe o número de pontos turísticos: ");
  scanf("%d", &numero_de_pontos_turisticos);

  // // 3. contas
  densidade_populacional = populacao / area;
  pib_per_capita = (pib * 1000000.0) / populacao;

  // // 4. dados da cidade
  printf("\nCarta cadastrada:\n");
  printf("Cidade: %s\n", nomeCidade);
  printf("País: %s\n", nomePais);
  printf("População: %.2f habitantes\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f milhões de dólares\n", pib);
  printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);

  // // Resultados
  printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
  printf("PIB per capita: %.2f dólares por habitante\n", pib_per_capita);

  return 0;
}