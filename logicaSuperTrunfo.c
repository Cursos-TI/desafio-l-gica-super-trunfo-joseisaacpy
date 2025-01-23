#include <stdio.h>

int main()
{
    int cod_cidade_a, cod_cidade_b;
    char nome_cidade_a[20], nome_cidade_b[20];
    float populacao_cidade_a, populacao_cidade_b;
    double area_cidade_a, area_cidade_b, pib_cidade_a, pib_cidade_b;
    int num_pontos_tur_cidade_a, num_pontos_tur_cidade_b;
    int pontos_cidade_a = 0, pontos_cidade_b = 0;

    // Entrada de dados da Cidade A
    printf("Primeiro, informe os dados da Cidade A:");
    printf("\nDigite o código da cidade:");
    scanf("%i", &cod_cidade_a);
    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_cidade_a);
    printf("\nDigite o número total da população:");
    scanf("%f", &populacao_cidade_a);
    printf("\nDigite a área da cidade:");
    scanf("%lf", &area_cidade_a);
    printf("\nDigite o valor do PIB da cidade:");
    scanf("%lf", &pib_cidade_a);
    printf("\nDigite a quantidade de pontos turísticos da cidade:");
    scanf("%i", &num_pontos_tur_cidade_a);

    // Entrada de dados da Cidade B
    printf("\nAgora, informe os dados da Cidade B:");
    printf("\nDigite o código da cidade:");
    scanf("%i", &cod_cidade_b);
    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_cidade_b);
    printf("\nDigite o número total da população:");
    scanf("%f", &populacao_cidade_b);
    printf("\nDigite a área da cidade:");
    scanf("%lf", &area_cidade_b);
    printf("\nDigite o valor do PIB da cidade:");
    scanf("%lf", &pib_cidade_b);
    printf("\nDigite a quantidade de pontos turísticos da cidade:");
    scanf("%i", &num_pontos_tur_cidade_b);

    // Comparações e pontuação
    // População
    if (populacao_cidade_a > populacao_cidade_b)
        pontos_cidade_a++;
    else if (populacao_cidade_a < populacao_cidade_b)
        pontos_cidade_b++;

    // Área
    if (area_cidade_a > area_cidade_b)
        pontos_cidade_a++;
    else if (area_cidade_a < area_cidade_b)
        pontos_cidade_b++;

    // PIB
    if (pib_cidade_a > pib_cidade_b)
        pontos_cidade_a++;
    else if (pib_cidade_a < pib_cidade_b)
        pontos_cidade_b++;

    // Pontos turísticos
    if (num_pontos_tur_cidade_a > num_pontos_tur_cidade_b)
        pontos_cidade_a++;
    else if (num_pontos_tur_cidade_a < num_pontos_tur_cidade_b)
        pontos_cidade_b++;

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Cidade A (%s): %d pontos\n", nome_cidade_a, pontos_cidade_a);
    printf("Cidade B (%s): %d pontos\n", nome_cidade_b, pontos_cidade_b);

    if (pontos_cidade_a > pontos_cidade_b)
        printf("\nA cidade vencedora é: %s (Cidade A)\n", nome_cidade_a);
    else if (pontos_cidade_a < pontos_cidade_b)
        printf("\nA cidade vencedora é: %s (Cidade B)\n", nome_cidade_b);
    else
        printf("\nAs duas cidades empataram!\n");

    return 0;
}
