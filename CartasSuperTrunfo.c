#include <stdio.h>

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

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPtsTur;
    int resultadoDensPop;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

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
    scanf("%s", cidade1);
    
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
    scanf("%s", cidade2);
    
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

    if(populacao1 > populacao2){
        resultadoPopulacao = 1;
    }else{
        resultadoPopulacao = 2;
    }

    if(area1 > area2){
        resultadoArea = 1;
    }else{
        resultadoArea = 2;
    }
    
    if(pib1 > pib2){
        resultadoPib = 1;
    }else{
        resultadoPib = 2;
    }
    
    if(pts_tur1 > pts_tur2){
        resultadoPtsTur = 1;
    }else{
        resultadoPtsTur = 2;
    }

    if(denspop1 < denspop2){
        resultadoDensPop = 1;
    }else{
        resultadoDensPop = 2;
    }

    if(pibpercapita1 > pibpercapita2){
        resultadoPibPerCapita = 1;
    }else{
        resultadoPibPerCapita = 2;
    }
    
    if(superpoder1 > superpoder2){
        resultadoSuperPoder = 1;
    }else{
        resultadoSuperPoder = 2;
    }



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
    printf("#              COMPARAÇÃO DAS CARTAS                # \n");
    printf("\n");
    printf("População: Carta %d venceu!\n", resultadoPopulacao);
    printf("Área: Carta %d venceu!\n", resultadoArea);
    printf("PIB: Carta %d venceu!\n", resultadoPib);
    printf("Pontos Turísticos: Carta %d venceu!\n", resultadoPtsTur);
    printf("Densidade Populacional: Carta %d venceu!\n", resultadoDensPop);
    printf("PIB Per Capita: Carta %d venceu!\n", resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu!\n", resultadoSuperPoder);
    printf("#                                                   # \n");
    printf("# # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
    return 0;
}