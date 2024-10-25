#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4];
    char nome[20];
    float area;
    float pib;
    int turist;
    int populacao;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao Super Trunfo, vamos começar realizando o cadastro da sua cidade!\n");
    printf("Digite o nome da sua cidade:");
    scanf("%s", &nome);
    printf("Agora digite a população de sua cidade:");
    scanf("%d", &populacao);
    printf("Agora digite a área de sua cidade:");
    scanf("%f", &area);
    printf("Agora digite o PIB de sua cidade:");
    scanf("%f", &pib);
    printf("Agora digite o numero de pontos turísticos de sua cidade:");
    scanf("%d", &turist);
    printf("Agora digite o código de sua cidade:");
    scanf("%s", &codigo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Essa é sua cidade cadastrada:\n");
    printf("Nome: %s \n", nome);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", turist);


    return 0;
}
