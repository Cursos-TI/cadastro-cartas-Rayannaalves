#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Função para limpar o buffer do teclado, necessária para ler
// textos após ler números ou outros tipos de dados com scanf.
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // --- Área para definição das variáveis para armazenar as propriedades das cidades ---

    // Variáveis para a primeira carta (Carta 1)
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta (Carta 2)
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Área para entrada de dados ---

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    limpar_buffer(); // Limpa o buffer antes de ler o nome

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Ideal para ler nomes com espaços

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    limpar_buffer(); // Limpa o buffer novamente

    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Área para exibição dos dados da cidade ---

    printf("\n\n===================================\n");
    printf("    CARTAS CADASTRADAS\n");
    printf("===================================\n\n");

    // Exibindo dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Codigo............: %s\n", codigo1);
    printf("Nome da Cidade....: %s", nomeCidade1); // fgets já armazena a quebra de linha
    printf("Populacao.........: %d\n", populacao1);
    printf("Area..............: %.2f km²\n", area1);
    printf("PIB...............: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos.: %d\n", pontosTuristicos1);

    printf("\n"); // Espaço entre as cartas

    // Exibindo dados da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Codigo............: %s\n", codigo2);
    printf("Nome da Cidade....: %s", nomeCidade2);
    printf("Populacao.........: %d\n", populacao2);
    printf("Area..............: %.2f km²\n", area2);
    printf("PIB...............: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos.: %d\n", pontosTuristicos2);

    return 0;
}