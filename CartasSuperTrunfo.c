#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declarando as variáveis da primeira carta:
    char estado1;
    char codigoDaCarta1[3];
    char nomeDaCidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;

    // Declarando as variáveis da segunda carta:
    char estado2;
    char codigoDaCarta2[3];
    char nomeDaCidade2[24];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;

    // Coletando os dados da primeira carta:
    printf("Digite as informações da sua 1° Carta\nDigite o Estado da Carta: ");
    scanf("%c", &estado1);

    printf("\nDigite o Codigo da Carta: ");
    scanf("%s", &codigoDaCarta1);

    printf("\nDigite o Nome da Cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("\nDigite a População da Cidade: ");
    scanf("%i", &populacao1);

    printf("\nDigite a Área (em km²) da Cidade: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("\nDigite o Número de Pontos Turísticos da Cidade: ");
    scanf("%i", &numeroDePontosTuristicos1);


    // Coletando os dados da segunda carta:
    printf("\n \nDigite as informações da sua 2° Carta\nDigite o Estado da Carta: ");
    scanf(" %c", &estado2);

    printf("\nDigite o Codigo da Carta: ");
    scanf("%s", &codigoDaCarta2);

    printf("\nDigite o Nome da Cidade: ");
    scanf("%s", nomeDaCidade2);

    printf("\nDigite a População da Cidade: ");
    scanf("%i", &populacao2);

    printf("\nDigite a Área (em km²) da Cidade: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite o Número de Pontos Turísticos da Cidade: ");
    scanf("%i", &numeroDePontosTuristicos2);

    // Exibindo as informações da primeira carta:
    printf("\n1° Carta:\n");
    printf(" Estado: %c \n Codígo: %.3s \n Nome da Cidade: %s \n População: %i \n Área: %f km² \n PIB: %f bilhões de reais \n Número de Pontos Turísticos: %i \n", estado1, codigoDaCarta1, nomeDaCidade1, populacao1, area1, pib1, numeroDePontosTuristicos1);

    // Exibindo as informações da segunda carta:
    printf("\n2° Carta:\n");
    // O estado não esta sendo capturado mesmo após adicionar o espaço assim como o professor ensinou no curso, não sei como arrumar utilizando o scanf
    printf(" Estado: %c \n Codígo: %.3s \n Nome da Cidade: %s \n População: %i \n Área: %f km² \n PIB: %f bilhões de reais \n Número de Pontos Turísticos: %i \n", estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, numeroDePontosTuristicos2);
     
    return 0;
}
