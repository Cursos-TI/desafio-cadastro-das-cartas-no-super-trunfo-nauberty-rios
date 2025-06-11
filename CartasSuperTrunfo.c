#include <stdio.h>
#include "CartasSuperTrunfo.h"
#include <string.h>




// Software do jogo Super Trunfo
// Passei boas madrugadas tentando resolver o porque quando eu declarava os nomes em %s string nao funcionava o codigo 
//de resto esta tudo funcionando !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!






int main() {
    int rank; 
    char nome;
    int populacao;
    float area;
    float pib;
    int pturisticos;

    int rankseg; 
    char nomeseg;
    int populacaoseg;
    float areaseg;
    float pibseg;
    int pturisticosseg;

printf("Oque acha de cadastrar suas cartas comigo. Bom vamos la:\n" );
printf("Cadastre o nome da cidade:\n ");
scanf("%s", &nome);

printf("Informe o numero de habitantes dessa cidade:\n ");
scanf("%d", &populacao);

printf("Informe a area que essa cidade cobre:\n ");
scanf("%f", &area);

printf("Informe o pib dessa cidade:\n ");
scanf("%f", &pib);

printf("Me diga quantos pontos turisticos tem nessa cidade:\n");
scanf("%d", &pturisticos);

printf("Vamos cadastrar a segunda carta!!\n\n");
scanf("Nome da cidade é: %s\n", nomeseg);

printf("Diga o nome da proxima cidade:\n");
scanf("%s", &nomeseg);

printf("Informe o numero de habitantes dessa cidade:\n ");
scanf("%d", &populacaoseg);

printf("Informe a area que essa cidade cobre:\n ");
scanf("%f", &areaseg);

printf("Informe o pib dessa cidade:\n ");
scanf("%f", &pibseg);

printf("Me diga quantos pontos turisticos tem nessa cidade:\n\n");
scanf("%d", &pturisticosseg);

printf("Cadastro concluido com sucesso!!\n\n");

printf("Carta 1\n");
printf("Estado: A\n");
printf("Código: A01\n");
printf("Nome da cidade: %d \n", nome);
printf("população: %d \n", populacao);
printf("Área: %f km² \n", area);
printf("PIB %f bilhões de reais \n", pib);
printf("Número de pontos turísticos: %d\n", pturisticos);

printf("\n\nCarta 2\n");
printf("Estado: B\n");
printf("Código: B02\n");
printf("Nome da cidade: %d \n", nomeseg);
printf("população: %d \n", populacaoseg);
printf("Área: %f km² \n", areaseg);
printf("PIB %f bilhões de reais \n", pibseg);
printf("Número de pontos turísticos: %d\n\n", pturisticosseg);
return 0;
}
