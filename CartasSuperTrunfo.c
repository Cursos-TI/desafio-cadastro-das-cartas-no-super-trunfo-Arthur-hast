#include <stdio.h>

int main() {
    // -> MONTAGEM DA CARTA 1 <-

    // Caracteristicas da carta 1:

    char Estado_1; // Uma letra que representa o estado de A à H.
    char Codigo_carta_1[5]; // Letra do estado + um numero.
    char nome_cidade_1[15]; // Nome da cidade.
    unsigned long int Populacao_1; // Quantidade da população.
    int Pontos_turisticos_1; //Quantidade de pontos turísticos.
    float Area_1, PIB_1; // Tamanho da área e o valor do PIB da cidade.
    float Densidade_Populacional_1;
    float Pib_per_capita_1;
    float superPoder_1;

    // Usuário colocará os dados da carta 1:
    printf("\n");
    printf("->>> PRIMEIRA CARTA <<<-: \n");
    printf("\n");

    printf("Digite a letra inicial do estado [De A à H]: ");
    scanf(" %c", &Estado_1);

    printf("Digite o código da carta [Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_1);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_1);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao_1);

    printf("Digite a área territorial da cidade (km²): ");
    scanf("%f", &Area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_1);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_1);

    //<< Cálculo da DENSIDADE POPULACIONAL e PIB PER CAPITA da carta 1 >>

    Densidade_Populacional_1 = (float) (Populacao_1 / Area_1);
    Pib_per_capita_1 = (float) (PIB_1/ Populacao_1);

    //<< Cálculo do "Super Poder" da carta 1 >>

    superPoder_1 = (float) (Populacao_1 + Area_1 + PIB_1 + Pontos_turisticos_1 + Pib_per_capita_1 - Densidade_Populacional_1);
    
    // -> MONTAGEM DA CARTA 2 <-

    //Caracteristicas da carta 2:

    char Estado_2, Codigo_carta_2[5], nome_cidade_2[15];
    unsigned long int Populacao_2;
    int Pontos_turisticos_2;
    float Area_2, PIB_2;
    float densidade_populacional_2, Pib_per_capita_2, superPoder_2;

    //Usuário colocará os dados da carta 2:
    printf("\n");
    printf("->>> SEGUNDA CARTA <<<-: \n");
    printf("\n");

    printf("Digite a letra inicial do estado [A à H]: ");
    scanf(" %c", &Estado_2);

    printf("Digite o código da carta [Estado + 01 - ex: A01, A02]: ");
    scanf("%s", Codigo_carta_2);

    printf("Insira o nome da Cidade (Que pertence ao estado escolhido): ");
    scanf("%s", nome_cidade_2);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao_2);

    printf("Digite a área territorial da cidade (km²): ");
    scanf("%f", &Area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB_2);

    printf("Insira quantos pontos turísticos há na cidade: ");
    scanf("%d", &Pontos_turisticos_2);

    //<< Cálculo da "DENSIDADE POPULACIONAL" e "PIB PER CAPITA" da carta 1 >>

    densidade_populacional_2 = (float) (Populacao_2 / Area_2);
    Pib_per_capita_2 = (float) (PIB_2 / Populacao_2);

    //<< Cálculo do "Super Poder" da Carta 2 >>

    superPoder_2 = (float) (Populacao_2 + Area_2 + PIB_2 + Pontos_turisticos_2 + Pib_per_capita_2 - densidade_populacional_2);

    //<< VARIAVEIS DE RESULTADO DA CARTA 1 >>

    int resultado_populacao_1 = Populacao_1 > Populacao_2;
    int resultado_area_1 = Area_1 > Area_2;
    int resultado_PIB_1 = PIB_1 > PIB_2;
    int resultado_pontos_turisticos_1 = Pontos_turisticos_1 > Pontos_turisticos_1;
    int resultado_densidade_populacional_1 = Densidade_Populacional_1 <  densidade_populacional_2;
    int resultado_PIB_Per_Capita_1 = Pib_per_capita_1 > Pib_per_capita_2;
    int resultado_super_poder_1 = superPoder_1 > superPoder_2;

//<< VARIAVEIS DE RESULTADO DA CARTA 2 >>

    int resultado_populacao_2 = Populacao_2 > Populacao_1;
    int resultado_area_2 = Area_2 > Area_1;
    int resultado_PIB_2 = PIB_2 > PIB_1;
    int resultado_pontos_turisticos_2 = Pontos_turisticos_2 > Pontos_turisticos_1;
    int resultado_densidade_populacional_2 = densidade_populacional_2 <  Densidade_Populacional_1;
    int resultado_PIB_Per_Capita_2 = Pib_per_capita_2 > Pib_per_capita_1;
    int resultado_super_poder_2 = superPoder_2 > superPoder_1;


    //<<DADOS DA CARTA 1>>
    printf("\n");
    printf("<<< CARTA 01 >>> \n");
    printf("\n");
    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_carta_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", Populacao_1);
    printf("Área: %.2fKm²\n", Area_1);
    printf("PIB: R$%.2f bilhões de reais\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_1);
    printf("PIB Per Capita: R$%.2f reais\n", Pib_per_capita_1);
    printf("Super Poder: %.2f\n",  superPoder_1);

    //<<DADOS DA CARTA 2>>
    printf("\n");
    printf("<<< CARTA 2 >>> \n");
    printf("\n");
    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", Populacao_2);
    printf("Área: %.2fKm²\n", Area_2);
    printf("PIB: R$%.2f bilhões de reais\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB Per Capita: R$%.2f reais\n", Pib_per_capita_2);
    printf("Super Poder: %.2f\n",  superPoder_2);

    //<< RESULTADO DA COMPARAÇÃO DAS CARTAS >>

    printf("\n");
    printf("<<< RESULTADO CARTA 01 >>> \n"); // << CARTA 1 >>
    printf("\n");
    printf("População: Venceu (%d)\n", resultado_populacao_1);
    printf("Área: Venceu (%d)\n", resultado_area_1);
    printf("PIB: Venceu (%d)\n", resultado_PIB_1);
    printf("Número de Pontos Turísticos: Venceu (%d)\n", resultado_pontos_turisticos_1);
    printf("Densidade Populacional: Venceu (%d)\n", resultado_densidade_populacional_1);
    printf("PIB Per Capita: Venceu (%d)\n", resultado_PIB_Per_Capita_1);
    printf("Super Poder: Venceu (%d)\n",  resultado_super_poder_1);


    printf("\n");
    printf("<<< RESULTADO CARTA 02 >>> \n"); // << CARTA 2 >>
    printf("\n");
    printf("População: Venceu (%d)\n", resultado_populacao_2);
    printf("Área: Venceu (%d)\n", resultado_area_2);
    printf("PIB: Venceu (%d)\n", resultado_PIB_2);
    printf("Número de Pontos Turísticos: Venceu (%d)\n", resultado_pontos_turisticos_2);
    printf("Densidade Populacional: Venceu (%d)\n", resultado_densidade_populacional_2);
    printf("PIB Per Capita: Venceu (%d)\n", resultado_PIB_Per_Capita_2);
    printf("Super Poder: Venceu (%d)\n",  resultado_super_poder_2);

    return 0;
}