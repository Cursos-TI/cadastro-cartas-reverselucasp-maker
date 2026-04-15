#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades        
    char estado = 'A';
    char codigo [50] = "A01";
    char nomecidade [50] = "Fortaleza";
    int polulacao = 200000;
    float areakm = 1200.85;
    float pib = 1300.50;
    int numerodepontosturisticos = 10;

    char estado2 = 'B';
    char codigo2 [50] = "B01";
    char nomecidade2 [50] = "Recife";
    int polulacao2 = 150000;
    float areakm2 = 300.00;
    float pib2 = 1250.00;
    int numerodepontosturisticos2 = 8;

  //Área para entrada de dados
  //entrada de dados da primeira cidade
    printf("O seu estado é:  %c\n", estado);
    scanf(" %c", &estado);
    printf("o seu codigo é: %s\n", codigo);
    scanf(" %c", &codigo);
    printf ("Nome da cidade é: %s\n", nomecidade);
    scanf("%s", &nomecidade);
    printf ("Tem a populção de: %d\n", polulacao);
    scanf("%d", &polulacao);
    printf ("area da cidade é: %.2f\n", areakm);
    scanf("%f", &areakm);
    printf ("Tem o pib de: %d\n", pib);
    scanf("%f", &pib);
    printf ("Quanto lugares turíticos tem: %d\n", numerodepontosturisticos);
    scanf("%d", &numerodepontosturisticos);
    
    return 0;

    //entrada de dados da segunda cidade



  // Área para exibição dos dados da cidade

    
} 
