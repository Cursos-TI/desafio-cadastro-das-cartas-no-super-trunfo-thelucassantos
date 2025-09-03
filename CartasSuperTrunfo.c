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
    char estado1;
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados
    printf("Cadastro da carta 1:\n");
    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Estado (A-D): ");
    scanf(" %c", &estado1);

    printf("Cidade:\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área em km^2:\n");
    scanf("%f", &area1);

    printf("Pib:\n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Saída de dados
    printf("\nCarta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
