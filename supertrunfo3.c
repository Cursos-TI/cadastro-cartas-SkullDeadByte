#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Leitura dos dados da Carta 1
    printf("=== DADOS CARTA 1 ===\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Código (3 caracteres): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Leitura dos dados da Carta 2
    printf("\n=== DADOS CARTA 2 ===\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado2);
    printf("Código (3 caracteres): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculos para ambas as cartas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    
    // Cálculo do Super Poder
    // Inverso da densidade (quanto menor a densidade, maior o poder)
    float inversoDensidade1 = 1.0 / densidade1;
    float inversoDensidade2 = 1.0 / densidade2;
    
    // Super Poder = soma de todos os atributos numéricos
    // Conversão explícita de tipos para evitar problemas
    float superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + 
                       (float)pontosTuristicos1 + (float)pibPerCapita1 + 
                       (float)inversoDensidade1;
    
    float superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + 
                       (float)pontosTuristicos2 + (float)pibPerCapita2 + 
                       (float)inversoDensidade2;
    
    // Exibição dos dados das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Comparação das cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    // População (maior vence)
    int resultadoPopulacao = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", (resultadoPopulacao ? 1 : 2), resultadoPopulacao);
    
    // Área (maior vence)
    int resultadoArea = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", (resultadoArea ? 1 : 2), resultadoArea);
    
    // PIB (maior vence)
    int resultadoPIB = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", (resultadoPIB ? 1 : 2), resultadoPIB);
    
    // Pontos Turísticos (maior vence)
    int resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (resultadoPontosTuristicos ? 1 : 2), resultadoPontosTuristicos);
    
    // Densidade Populacional (menor vence)
    int resultadoDensidade = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (resultadoDensidade ? 1 : 2), resultadoDensidade);
    
    // PIB per Capita (maior vence)
    int resultadoPIBperCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", (resultadoPIBperCapita ? 1 : 2), resultadoPIBperCapita);
    
    // Super Poder (maior vence)
    int resultadoSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", (resultadoSuperPoder ? 1 : 2), resultadoSuperPoder);
    
    return 0;
}
