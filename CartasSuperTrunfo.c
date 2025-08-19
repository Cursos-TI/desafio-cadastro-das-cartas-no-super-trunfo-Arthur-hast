#include <stdio.h>

int main() {
    
    char Estado_1, Codigo_carta_1[5], nome_cidade_1[15];
    int Populacao_1, Pontos_turisticos_1;
    float Area_1, PIB_1;

    printf("\n");
    printf("Primeira carta: \n");
    printf("\n");

    printf("Digite a letra inicial do estado [De A à H]: ");
    scanf(" %c", &Estado_1);

    printf("Digite o código da carta [Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_1);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_1);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao_1);

    printf("Digite a área territorial da cidade: ");
    scanf("%f", &Area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_1);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_1);

    char Estado_2, Codigo_carta_2[5], nome_cidade_2[15];
    int Populacao_2, Pontos_turisticos_2;
    float Area_2, PIB_2;

    printf("\n");
    printf("Segunda carta: \n");
    printf("\n");

    printf("Digite a letra inicial do estado [A à H]: ");
    scanf(" %c", &Estado_2);

    printf("Digite o código da carta [Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_2);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_2);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao_2);

    printf("Digite a área territorial da cidade: ");
    scanf("%f", &Area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_2);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_2);

    printf("\n");
    printf("Carta 01: \n");
    printf("\n");

    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_carta_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", Populacao_1);
    printf("Área: %.2fKm²\n", Area_1);
    printf("PIB: %.2f\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);

    printf("\n");
    printf("Carta 02: \n");
    printf("\n");

    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", Populacao_2);
    printf("Área: %.2fKm²\n", Area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);

    return 0;
}
