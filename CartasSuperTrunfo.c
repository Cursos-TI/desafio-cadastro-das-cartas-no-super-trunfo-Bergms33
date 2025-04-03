#include <stdio.h>

int main() {
    printf("Super Trunfo!\n");
    printf("comit\n");

    char estado = 'A';
    char codigodacarta[20] = "A01";
    char nomedacidade[20] = "Amazonas";
    float populacao = 20.636890; 
    float area = 11.401902;
    float pib = 103.281;
    int numerodepontosturisticos = 10;

    printf("Estado: %c\n" ,estado);
    printf("Código da Cidade: %s\n" ,codigodacarta);
    printf("Nome da Cidade: %s\n" ,nomedacidade);
    printf("Populaçao: %.6f Milhões\n" ,populacao);
    printf("Área: %.3f km2\n", area);
    printf("PIB: %.3f Milhões\n", pib);
    printf("Número de Pontos Turisticos: %d\n", numerodepontosturisticos);

    return 0;
  }


