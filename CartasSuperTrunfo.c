#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades  
  //Carta 1      
    char estado = 'A';
    char codigo [50] = "A01";
    char nomecidade [50] = "Fortaleza";
    int polulacao = 200000;
    float areakm = 1200.85;
    float pib = 1300.50;
    int numerodepontosturisticos = 10;

  //Carta 2
    char estado2 = 'B';
    char codigo2 [50] = "B01";
    char nomecidade2 [50] = "Recife";
    int polulacao2 = 150000;
    float areakm2 = 300.00;
    float pib2 = 1250.00;
    int numerodepontosturisticos2 = 8;

  //Área para entrada de dados
  //Entrada de dados da primeira cidade Carta 1
    printf("O seu estado é:  %c\n", estado);
    scanf(" %c", &estado);

    printf("o seu codigo é: %s\n", codigo);
    scanf(" %s", codigo);

    printf ("Nome da cidade é: %s\n", nomecidade);
    scanf("%s", nomecidade);

    printf ("Tem a populção de: %d\n", polulacao);
    scanf("%d", &polulacao);

    printf ("area da cidade é: %.2f\n", areakm);
    scanf("%f", &areakm);

    printf ("Tem o pib de: %.2f\n", pib);
    scanf("%f", &pib);

    printf ("Quanto lugares turíticos tem: %d\n", numerodepontosturisticos);
    scanf("%d", &numerodepontosturisticos);
    

    //Entrada de dados da segunda cidade Carta 2
    printf("O seu estado é:  %c\n", estado2);
    scanf(" %c", &estado2);

    printf("o seu codigo é: %s\n", codigo2);
    scanf(" %s", codigo2);
    
    printf ("Nome da cidade é: %s\n", nomecidade2);
    scanf("%s", nomecidade2);

    printf ("Tem a populção de: %d\n", polulacao2);
    scanf("%d", &polulacao2);

    printf ("area da cidade é: %.2f\n", areakm2);
    scanf("%f", &areakm2);

    printf ("Tem o pib de: %.2f\n", pib2);
    scanf("%f", &pib2);

    printf ("Quanto lugares turíticos tem: %d\n", numerodepontosturisticos2);
    scanf("%d", &numerodepontosturisticos2);


  // Área para exibição dos dados da cidade
  // Exibição dos dados da primeira cidade Carta 1
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", polulacao);
    printf("Área (km²): %.2f\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);
    
  // Exibição dos dados da segunda cidade Carta 2
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", polulacao2);
    printf("Área (km²): %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);

    return 0;
} 
