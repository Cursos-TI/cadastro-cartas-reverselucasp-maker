#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades  
  
  //Carta 1      
    
    char estado;
    char codigo [50];
    char nomecidade [50];
    int populacao;
    float areakm;
    float pib;
    int numerodepontosturisticos;

  //Carta 2
    char estado2;
    char codigo2 [50];
    char nomecidade2 [50];
    int populacao2;
    float areakm2;
    float pib2;
    int numerodepontosturisticos2;

  //Área para entrada de dados
  //Entrada de dados da primeira cidade Carta 1
    
    printf ("Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("o Codigo da Carta 1: ");
    scanf("%s", codigo);

    printf ("Nome da cidade: ");
    scanf("%s", nomecidade);

    printf ("A Populção de: ");
    scanf("%d", &populacao);

    printf ("area da cidade: ");
    scanf("%f", &areakm);

    printf ("o Pib em (bilhões): ");
    scanf("%f", &pib);

    printf ("Números de turíticos: ");
    scanf("%d", &numerodepontosturisticos);
    
    //Entrada de dados da segunda cidade Carta 2
    
    printf ("\n\nCarta 2\n");

    printf("O Estado:  ");
    scanf(" %c", &estado2);

    printf("O Codigo da Carta: ");
    scanf(" %s", codigo2);
    
    printf ("Nome da Cidade: ");
    scanf("%s", nomecidade2);

    printf ("Populção: ");
    scanf("%d", &populacao2);

    printf ("Area da Cidade: ");
    scanf("%f", &areakm2);

    printf ("Pib em (Bilhoes): ");
    scanf("%f", &pib2);

    printf ("Numeros turíticos: ");
    scanf("%d", &numerodepontosturisticos2);


  // Área para exibição dos dados da cidade
  // Exibição dos dados da primeira cidade Carta 1
    printf("Carta 1 \n");
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área (km²): %.2f\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);
    
  // Exibição dos dados da segunda cidade Carta 2
    printf("Carta 2 \n");
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);

    return 0;
} 
