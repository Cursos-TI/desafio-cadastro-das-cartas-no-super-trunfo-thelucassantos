#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis
    char codigo1[4];
    char estado1[30];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char codigo2[4];
    char estado2[30];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Cadastro da carta 1:\n");
    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Estado:\n");
    scanf("%s", estado1);

    printf("Cidade:\n");F
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área em km^2:\n");
    scanf("%f", &area1);

    printf("Pib:\n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("Cadastro da carta 2:\n");
    printf("Código:\n");
    scanf("%s", codigo2);

    printf("Estado:\n");
    scanf("%s", estado2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área em km^2:\n");
    scanf("%f", &area2);

    printf("Pib:\n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Saída de dados
    printf("\nCarta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
