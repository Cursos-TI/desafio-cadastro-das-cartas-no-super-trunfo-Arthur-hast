#include <stdio.h>

int main() {
    
    //AS VARIAVEIS FORAM ORGANIZADOS POR TIPO, DE MANEIRA SIMPLES PARA NÃO GERAR REPETIÇÕES DOS TIPOS.

    char Estado[15], Codigo[15], cidade[15];
    int Populacao, Pontos;
    float Area, PIB;

    //Nessa parte estou realizando as perguntas de maneira simples e de facil entendimento, para a construção da carta.

    printf("Primeira carta: \n");

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado);

    printf("Digite o código da carta: ");
    scanf("%s", Codigo);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", cidade);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao);

    printf("Digite a área territorial da cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Insira quantos pontos turísticos há nessa cidade: ");
    scanf("%d", &Pontos);

    //O "printf("\n")" foi ultilizado para organizar o espaço.

    printf("\n");

    //Aqui iremos imprimir a carta de acordo com as respostas anteriores.
    
    printf("Carta 01: \n");

    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %fKm² \n", Area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Pontos);

    printf("\n");
    
    //Agora realizando a interação para a construção da segunda carta.

    printf("Segunda carta: \n");

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado);

    printf("Digite o código da carta: ");
    scanf("%s", Codigo);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", cidade);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao);

    printf("Digite a área territorial da cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Insira quantos pontos turísticos há nessa cidade: ");
    scanf("%d", &Pontos);

    printf("\n");

    //E por fim, realizando a impressão da segunda carta.

    printf("Carta 02: \n");

    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %fKm² \n", Area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Pontos);

    return 0;
}
