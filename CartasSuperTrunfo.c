#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int codigoc = 1000;
    int pturisticos = 32;
    char nome[50] = "Brasília";
    float pib = 328.8; //Em bilhões
    double populacao = 2.817; //Em milhões
    double area = 5.779; //Km2

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Código da cidade: \n");
    scanf("%d", &codigoc);
    
    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("População da cidade: \n");
    scanf("%f", &populacao);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturisticos);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Código da cidade: %d \n", codigoc);
    printf("Nome da cidade: %s \n", nome);
    printf("Área da cidade: %.2f \n", area);
    printf("População da cidade: %.2f \n");
    printf("Número de pontos turísticos %d \n", pturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
