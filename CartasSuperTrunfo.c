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
    unsigned long int populacao;
    float areakm;
    float pib;
    int numerodepontosturisticos;
    float Densindadepopulacional;
    float pibcapita;
    float superpoder;

  //Carta 2
    char estado2;
    char codigo2 [50];
    char nomecidade2 [50];
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int numerodepontosturisticos2;
    float Densindadepopulacional2;
    float pibcapita2;
    float superpoder2;

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
    scanf("%lu", &populacao);

    printf ("area da cidade: ");
    scanf("%f", &areakm);

    printf ("o Pib em (bilhões): ");
    scanf("%f", &pib);

    printf ("Números de turíticos: ");
    scanf("%d", &numerodepontosturisticos);
    
    //Cálculos da primeira carta
    Densindadepopulacional =  (populacao / areakm);
    pibcapita = (pib * 1000000000 / populacao);
    superpoder = populacao + areakm + pib + numerodepontosturisticos + pibcapita + (1 / Densindadepopulacional);

    //Entrada de dados da segunda cidade Carta 2
    
    printf ("\n\nCarta 2\n");

    printf("O Estado:  ");
    scanf(" %c", &estado2);

    printf("O Codigo da Carta: ");
    scanf(" %s", codigo2);
    
    printf ("Nome da Cidade: ");
    scanf("%s", nomecidade2);

    printf ("Populção: ");
    scanf("%lu", &populacao2);

    printf ("Area da Cidade: ");
    scanf("%f", &areakm2);

    printf ("Pib em (Bilhoes): ");
    scanf("%f", &pib2);

    printf ("Numeros turíticos: ");
    scanf("%d", &numerodepontosturisticos2);

    //Cálculos da Segunda carta
    Densindadepopulacional2 = (populacao2 / areakm2);
    pibcapita2 = (pib2 * 1000000000 / populacao2);
    superpoder2 = populacao2 + areakm2 + pib2 + numerodepontosturisticos2 + pibcapita2 + (1 / Densindadepopulacional2);

  // Área para exibição dos dados da cidade
  // Exibição dos dados da primeira cidade Carta 1
    printf("\nCarta 1 \n");
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %lu\n", populacao);
    printf("Área (km²): %.2f\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);
    printf("A Densidade Populacional: %.2f\n", Densindadepopulacional);
    printf("Pib per capita: %.2f\n", pibcapita);
    printf("Superpoder: %.2f\n", superpoder);
    
  // Exibição dos dados da segunda cidade Carta 2
    printf("\nCarta 2 \n");
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (km²): %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("A Densidade Populacional: %.2f\n", Densindadepopulacional2);
    printf("Pib per capita: %.2f\n", pibcapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    //Comparação das Cartas
    
    printf("\nComparação das Cartas:\n");

    printf ("População: %d\n", populacao > populacao2);
    printf ("Área: %d\n", areakm > areakm2);
    printf ("PIB: %d\n", pib > pib2);
    printf ("Número de Pontos Turísticos: %d\n", numerodepontosturisticos > numerodepontosturisticos2);
    // menor Densidade Vence
    printf ("Densidade Populacional: %d\n", Densindadepopulacional < Densindadepopulacional2);
    printf ("Pib per capita: %d\n", pibcapita > pibcapita2);
    printf ("Superpoder: %d\n", superpoder > superpoder2);

    return 0;
} 
