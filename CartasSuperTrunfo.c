#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Variáveis da Carta 1
    char estado1[2];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    int pts_tur1;
    float area1;
    float pib1;
    float denspop1;
    float pibpercapita1;
    float superpoder1;

    
    
    // Variáveis da Carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int pts_tur2;
    float area2;
    float pib2;
    float denspop2;
    float pibpercapita2;
    float superpoder2;

    // int resultadoPopulacao;
    // int resultadoArea;
    // int resultadoPib;
    // int resultadoPtsTur;
    // int resultadoDensPop;
    // int resultadoPibPerCapita;
    // int resultadoSuperPoder;

    char resultadoPopulacao[50];
    char resultadoArea[50];
    char resultadoPib[50];
    char resultadoPtsTur[50];
    char resultadoDensPop[50];
    char resultadoPibPerCapita[50];
    char resultadoSuperPoder[50];

    int opcaoAtributos;

    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#               CADASTRO DE CARTAS                  # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");

    printf("* * * Entre com os dados da primeira carta: * * *\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pts_tur1);

    denspop1 = (float) populacao1 / area1;
    pibpercapita1 = (float) (pib1*1000000000) / populacao1;
    
    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#         CARTA 1 CADASTRADA COM SUCESSO!           # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("* * * Agora, entre com os dados da segunda carta: * * *\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pts_tur2);

    denspop2 = (float) populacao2 / area2;
    pibpercapita2 = (float) (pib2*1000000000) / populacao2;

    superpoder1 = (float) populacao1 + pts_tur1 + area1 + pib1 + pibpercapita1 + (1 / denspop1);
    superpoder2 = (float) populacao2 + pts_tur2 + area2 + pib2 + pibpercapita2 + (1 / denspop2);

    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#         CARTA 2 CADASTRADA COM SUCESSO!           # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#                DADOS DA CARTA 1                   # \n");
    printf("\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pts_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("#                                                   # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#                DADOS DA CARTA 2                   # \n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pts_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("#                                                   # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("\n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    printf("#            S U P E R    T R U N F O               # \n");
    printf("#                                                   # \n");
    printf("# Cartas Cadastradas:                               # \n");
    printf("# * Carta 01: %s \n", cidade1);
    printf("# * Carta 02: %s \n", cidade2);
    printf("#                                                   # \n");
    printf("#        Escolha o Atributo para comparação:        # \n");
    printf("#                                                   # \n");
    printf("# 1. População                                      # \n");
    printf("# 2. Área                                           # \n");
    printf("# 3. PIB                                            # \n");
    printf("# 4. Número de Pontos Turísticos                    # \n");
    printf("# 5. Densidade Demográfica                          # \n");
    printf("# 6. PIB Per Capita                                 # \n");
    printf("# 7. Super Poder                                    # \n");
    printf("                                                    # \n");
    scanf("%d", &opcaoAtributos);

    switch (opcaoAtributos)
    {
    case 1:
        printf("#             COMPARAÇÃO POR POPULAÇÃO:             # \n");
        printf("# Carta 01: %s: %lu \n", cidade1, populacao1);
        printf("# Carta 02: %s: %lu \n", cidade2, populacao2);
        printf("#                                                   # \n");
        if(populacao1 > populacao2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(populacao1 == populacao2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 2:
        printf("#             COMPARAÇÃO POR ÁREA:                  # \n");
        printf("# Carta 01: %s: %.2f \n", cidade1, area1);
        printf("# Carta 02: %s: %.2f \n", cidade2, area2);
        printf("#                                                   # \n");
        if(area1 > area2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(area1 == area2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 3:
        printf("#             COMPARAÇÃO POR PIB:                   # \n");
        printf("# Carta 01: %s: %.2f \n", cidade1, pib1);
        printf("# Carta 02: %s: %.2f \n", cidade2, pib2);
        printf("#                                                   # \n");
        if(pib1 > pib2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(pib1 == pib2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 4:
        printf("#         COMPARAÇÃO POR PONTOS TURÍSTICOS:         # \n");
        printf("# Carta 01: %s: %d \n", cidade1, pts_tur1);
        printf("# Carta 02: %s: %d \n", cidade2, pts_tur2);
        printf("#                                                   # \n");
        if(pts_tur1 > pts_tur2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(pts_tur1 == pts_tur2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 5:
        printf("#       COMPARAÇÃO POR DENSIDADE DEMOGRÁFICA:       # \n");
        printf("# Carta 01: %s: %.2f \n", cidade1, denspop1);
        printf("# Carta 02: %s: %.2f \n", cidade2, denspop2);
        printf("#                                                   # \n");
        if(denspop1 < denspop2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(denspop1 == denspop2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 6:
        printf("#           COMPARAÇÃO POR PIB PER CAPITA:          # \n");
        printf("# Carta 01: %s: %.2f \n", cidade1, pibpercapita1);
        printf("# Carta 02: %s: %.2f \n", cidade2, pibpercapita2);
        printf("#                                                   # \n");
        if(pibpercapita1 > pibpercapita2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(pibpercapita1 == pibpercapita2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;

    case 7:
        printf("#            COMPARAÇÃO POR SUPER PODER:            # \n");
        printf("# Carta 01: %s: %.2f \n", cidade1, superpoder1);
        printf("# Carta 02: %s: %.2f \n", cidade2, superpoder2);
        printf("#                                                   # \n");
        if(superpoder1 > superpoder2){
            printf("# CARTA 01 VENCEU!!!                                # \n");
        }else if(superpoder1 == superpoder2){
            printf("# HOUVE UM EMPATE!!!                                # \n");
        }else{
            printf("# CARTA 02 VENCEU!!!                                # \n");
        }
        break;
    default:
        break;
    }
    printf("#                                                   # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    // printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    // printf("#            S U P E R    T R U N F O               # \n");
    // printf("#              COMPARAÇÃO DAS CARTAS                # \n");
    // printf("\n");
    // printf("População: Carta %d venceu!\n", resultadoPopulacao);
    // printf("Área: Carta %d venceu!\n", resultadoArea);
    // printf("PIB: Carta %d venceu!\n", resultadoPib);
    // printf("Pontos Turísticos: Carta %d venceu!\n", resultadoPtsTur);
    // printf("Densidade Populacional: Carta %d venceu!\n", resultadoDensPop);
    // printf("PIB Per Capita: Carta %d venceu!\n", resultadoPibPerCapita);
    // printf("Super Poder: Carta %d venceu!\n", resultadoSuperPoder);
    // printf("#                                                   # \n");
    // printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");

    return 0;
}