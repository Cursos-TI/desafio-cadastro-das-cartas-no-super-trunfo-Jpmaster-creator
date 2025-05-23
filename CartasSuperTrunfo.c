
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigocarta1 [4], codigocarta2 [4];
    char nomecidade1 [15], nomecidade2 [15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    // Entrada de dados pelo usuario via teclado //


    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf("%c", &estado1);

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta1);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", nomecidade1);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area1);
    
    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib1);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico1);

    printf("Agora vamos criar a segunda carta!\n");

    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf(" %c", &estado2);                                                             // Foi necessario colocar um espaço atrás da "%" por causa de uma anamolia da linguagem c que adiciona \n //

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta2);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", nomecidade2);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area2);

    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib2);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico2);

    printf("Suas cartas estão prontas!\n");

    //Resultado das cartas inseridas pelo usuario//

    printf("Carta1\n");                                                     
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);

    printf("Carta2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);
    
    return 0;
}
