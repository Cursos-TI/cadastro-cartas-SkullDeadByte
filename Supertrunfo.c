#include <stdio.h>
#include <stdlib.h> // Para system()

int main(){
  

    // Dados da Carta 1 - S�o Paulo
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "S�o Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Dados da Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Exibi��o dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);

    // Exibi��o dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);

    return 0;
}

