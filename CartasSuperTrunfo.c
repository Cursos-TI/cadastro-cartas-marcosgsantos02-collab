#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1;
  char codigo1[4];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  char estado2;
  char codigo2[4];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

    // Área para entrada de dados
    // Dados carta 1:
  printf("CARTA 1: \n");

  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado1);

  printf("Digite o código (Ex: A01): \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade1);

  printf("Digite a população: \n");
  scanf("%i", &populacao1);

  printf("Digite a área da cidade (em KM²): \n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade (em bilhões): \n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%i", &pontosturisticos1);

    // Dados da carta 2:  
  
  printf("CARTA 2: \n");

  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado2);

  printf("Digite o código (ex: A01): \n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade2);

  printf("Digite a população: \n");
  scanf("%i", &populacao2);

  printf("Digite a área da cidade (em KM²): \n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade (em bilhões): \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%i", &pontosturisticos2);
  
    // Área para exibição dos dados da cidade
    // Exibir carta 1:
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", cidade1);
  printf("População: %i \n", populacao1);
  printf("Àrea: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de pontos turísticos: %i \n", pontosturisticos1);

    //Exibir carta 2:
  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("População: %i \n", populacao2);
  printf("Àrea: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos turísticos: %i \n", pontosturisticos2);



return 0;
} 
