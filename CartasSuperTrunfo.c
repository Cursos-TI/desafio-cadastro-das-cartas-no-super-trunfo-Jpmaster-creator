#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo_de_carta [20];
    char nome_da_cidade [58];
    int população;
    float Área;
    float PIB;
    int Quantidade_de_Pontos_Turísticos;


    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf("%c", &estado);

    printf("Agora insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", &codigo_de_carta);

    printf("Digite o nome da cidade escolhida: ");
    scanf("%s", &nome_da_cidade);

    printf("Defina O número de habitantes da cidade: ");
    scanf("%d", &população);

    printf("Defina agora o tamanho da área da cidade: ");
    scanf("%f", &Área);

    printf("Escolha o PIB, referente a cidade: ");
    scanf("%d", &Quantidade_de_Pontos_Turísticos);


    sprintf("Sua carta está pronta!");
    sprintf("Carta 1"\n%c, estado);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
