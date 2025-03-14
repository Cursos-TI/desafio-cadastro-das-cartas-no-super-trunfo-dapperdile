#include <stdio.h>

int main() {
    // Declaração das variáveis para carta 1 e carta 2
    char c1_pais[50], c2_pais[50], c1_codigo[10], c2_codigo[10], c1_cidade[50], c2_cidade[50];
    float c1_area, c2_area, c1_densidade_populacional, c2_densidade_populacional, c1_PIB, c2_PIB, c1_PIB_per_capita, c2_PIB_per_capita;
    unsigned int c1_populacao, c2_populacao, c1_numero_pontos_turisticos, c2_numero_pontos_turisticos, vencedor, opcao_c1, opcao_c2;

    // Cadastro da Carta 1
    printf("\033[H\033[J");
    printf("Cadastro da Carta 1: \n");

    printf("Nome do Pais: ");
    scanf(" %49[^\n]", c1_pais);

    printf("Codigo: ");
    scanf(" %9s", c1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", c1_cidade);

    printf("Area: ");
    scanf(" %f", &c1_area);

    printf("PIB: ");
    scanf(" %f", &c1_PIB);

    printf("População: ");
    scanf(" %d", &c1_populacao);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &c1_numero_pontos_turisticos);

    printf("\033[H\033[J");

    // Calculos da Densidade Populacional e PIB per capita
    c1_densidade_populacional = c1_populacao / c1_area;
    c1_PIB_per_capita = c1_PIB / c1_populacao;

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2: \n");

    printf("Nome do Pais: ");
    scanf(" %49[^\n]", c2_pais);

    printf("Codigo: ");
    scanf(" %9s", c2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", c2_cidade);
    
    printf("Area: ");
    scanf(" %f", &c2_area);

    printf("PIB: ");
    scanf(" %f", &c2_PIB);

    printf("População: ");
    scanf(" %d", &c2_populacao);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &c2_numero_pontos_turisticos);

    printf("\033[H\033[J");

    // Calculos da Densidade Populacional e PIB per capita
    c2_densidade_populacional = c2_populacao / c2_area;
    c2_PIB_per_capita = c2_PIB / c2_populacao;

    // Exibição dos Valores da Carta 1
    printf("######################\n");
    printf("Carta 1: \n");
    printf("Nome do Pais: %s\n", c1_pais);
    printf("Codigo: %s\n", c1_codigo);
    printf("Nome da Cidade: %s\n", c1_cidade);
    printf("Area: %.2f\n", c1_area);
    printf("PIB: %.2f\n", c1_PIB);
    printf("População: %d\n", c1_populacao);
    printf("Numero de Pontos Turisticos: %d\n", c1_numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", c1_densidade_populacional);
    printf("PIB per Capita: %.2f\n", c1_PIB_per_capita);

    // Exibição dos Valores da Carta 2
    printf("######################\n");
    printf("Carta 2: \n");
    printf("Nome do Pais: %s\n", c2_pais);
    printf("Codigo: %s\n", c2_codigo);
    printf("Nome da Cidade: %s\n", c2_cidade);
    printf("Area: %.2f\n", c2_area);
    printf("PIB: %.2f\n", c2_PIB);
    printf("População: %d\n", c2_populacao);
    printf("Numero de Pontos Turisticos: %d\n", c2_numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", c2_densidade_populacional);
    printf("PIB per Capita: %.2f\n", c2_PIB_per_capita);

    // Menu para seleção dos atributos para comparação.
    printf("######################\n");
    printf("Escolha o Atributo da Carta: \n");
    printf("1 - Area\n");
    printf("2 - PIB\n");
    printf("3 - População\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Soma de Dois Valores\n");
    scanf(" %d", &opcao_c1);

    // Switch para cada atributo, exibindo nome do Pais e Codigo, e atributo a ser comparado
    switch (opcao_c1)
    {
    case 1:
        printf("Carta 1: %s (%s), Área: %.2f\n", c1_pais, c1_codigo, c1_area);
        printf("Carta 2: %s (%s), Área: %.2f\n", c2_pais, c2_codigo, c2_area);
        vencedor = (c1_area > c2_area) ? 1 : (c1_area < c2_area) ? 2 : 0;
        break;
    case 2:
        printf("Carta 1: %s (%s), PIB: %.2f\n", c1_pais, c1_codigo, c1_PIB);
        printf("Carta 2: %s (%s), PIB: %.2f\n", c2_pais, c2_codigo, c2_PIB);
        vencedor = (c1_PIB > c2_PIB) ? 1 : (c1_PIB < c2_PIB) ? 2 : 0;
        break;
    case 3:
        printf("Carta 1: %s (%s), População: %d\n", c1_pais, c1_codigo, c1_populacao);
        printf("Carta 2: %s (%s), População: %d\n", c2_pais, c2_codigo, c2_populacao);
        vencedor = (c1_populacao > c2_populacao) ? 1 : (c1_populacao < c2_populacao) ? 2 : 0;
        break;
    case 4:
        printf("Carta 1: %s (%s), Numero de Pontos Turisticos: %d\n", c1_pais, c1_codigo, c1_numero_pontos_turisticos);
        printf("Carta 2: %s (%s), Numero de Pontos Turisticos: %d\n", c2_pais, c2_codigo, c2_numero_pontos_turisticos);
        vencedor = (c1_numero_pontos_turisticos > c2_numero_pontos_turisticos) ? 1 : (c1_numero_pontos_turisticos < c2_numero_pontos_turisticos) ? 2 : 0;
        break;
    case 5:
        printf("Carta 1: %s (%s), Densidade Populacional: %.2f\n", c1_pais, c1_codigo, c1_densidade_populacional);
        printf("Carta 2: %s (%s), Densidade Populacional: %.2f\n", c2_pais, c2_codigo, c2_densidade_populacional);
        vencedor = (c1_densidade_populacional < c2_densidade_populacional) ? 1 : (c1_densidade_populacional > c2_densidade_populacional) ? 2 : 0;
        break;
    case 6:
        printf("Carta 1: %s (%s), PIB per Capita: %.2f\n", c1_pais, c1_codigo, c1_PIB_per_capita);
        printf("Carta 2: %s (%s), PIB per Capita: %.2f\n", c2_pais, c2_codigo, c2_PIB_per_capita);
        vencedor = (c1_PIB_per_capita > c2_PIB_per_capita) ? 1 : (c1_PIB_per_capita < c2_PIB_per_capita) ? 2 : 0;
        break;
    case 7:
        // Escolha de dois atributos e comparação da soma deles entre as cartas
        printf("Escolha o primeiro atributo:\n");
        printf("1 - Área\n2 - PIB\n3 - População\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
        scanf(" %d", &opcao_c1);
    
        printf("Escolha o segundo atributo:\n");
        scanf(" %d", &opcao_c2);
    
        // Criado um array para facilitar o acesso aos atributos
        float atributos_c1[] = {c1_area, c1_PIB, (float)c1_populacao, (float)c1_numero_pontos_turisticos, c1_densidade_populacional, c1_PIB_per_capita};
        float atributos_c2[] = {c2_area, c2_PIB, (float)c2_populacao, (float)c2_numero_pontos_turisticos, c2_densidade_populacional, c2_PIB_per_capita};
    
        // Garantir que os índices escolhidos estão dentro do intervalo correto
        if (opcao_c1 >= 1 && opcao_c1 <= 6 && opcao_c2 >= 1 && opcao_c2 <= 6) {
            float soma_c1 = atributos_c1[opcao_c1 - 1] + atributos_c1[opcao_c2 - 1];
            float soma_c2 = atributos_c2[opcao_c1 - 1] + atributos_c2[opcao_c2 - 1];
    
            printf("Soma dos atributos da Carta 1: %.2f\n", soma_c1);
            printf("Soma dos atributos da Carta 2: %.2f\n", soma_c2);
    
            vencedor = (soma_c1 > soma_c2) ? 1 : (soma_c1 < soma_c2) ? 2 : 0;
        } else {
            printf("Opção inválida!\n");
            return 1;
        }
        break;

    default:
        printf("Opção Errada");
        break;
    }
    // Aqui é exibido o vencedor
    if (vencedor == 1)
    { printf("Carta 1 Venceu!"); } 
    else if (vencedor == 2)
    { printf("Carta 2 Venceu!"); } 
    else 
    { printf("Empate!"); }
    
    
    return 0;
}
