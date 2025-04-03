#include <stdio.h>

int main() {
    printf("Super Trunfo!\n");
    printf("comit\n");

    char estado = 'A';
    char codigodacarta[20] = "B02";
    char nomedacidade[20] = "Acre";
    float populacao = 880.631; 
    float area = 152.581;
    float pib = 23.600;
    int numerodepontosturisticos = 15;

    printf("Estado: %c\n" ,estado);
    printf("Código da Cidade: %s\n" ,codigodacarta);
    printf("Nome da Cidade: %s\n" ,nomedacidade);
    printf("Populaçao: %.3f Milhões\n" ,populacao);
    printf("Área: %.3f km2\n", area);
    printf("PIB: %.3f Milhões\n", pib);
    printf("Número de Pontos Turisticos: %d\n", numerodepontosturisticos);

    return 0;
  }