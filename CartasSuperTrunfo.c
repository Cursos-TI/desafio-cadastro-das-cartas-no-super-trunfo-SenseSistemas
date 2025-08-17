#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis da Carta 1
    char estado1[2];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    int pts_tur1;
    float area1;
    float pib1;
    
    // Variáveis da Carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pts_tur2;
    float area2;
    float pib2;

    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("             S U P E R    T R U N F O                 \n");
    printf("                CADASTRO DE CARTAS                    \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");

    printf("Entre com os dados da primeira carta:\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pts_tur1);

    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("             S U P E R    T R U N F O                 \n");
    printf("          CARTA 1 CADASTRADA COM SUCESSO!             \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("Agora, entre com os dados da segunda carta:\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pts_tur2);

    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("             S U P E R    T R U N F O                 \n");
    printf("          CARTA 2 CADASTRADA COM SUCESSO!             \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("             S U P E R    T R U N F O                 \n");
    printf("                 DADOS DA CARTA 1                     \n");
    printf("\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pts_tur1);
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("             S U P E R    T R U N F O                 \n");
    printf("                 DADOS DA CARTA 2                     \n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pts_tur2);
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");

    return 0;
}
