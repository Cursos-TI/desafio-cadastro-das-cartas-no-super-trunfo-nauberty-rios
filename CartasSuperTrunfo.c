#include <stdio.h>
#include "CartasSuperTrunfo.h"
#include <string.h>

int main() {
    float rank1, rank2, resultadoseg; //È O "SUPER PODER"
    char nome[50], nomeseg[50];
    unsigned long int populacao, populacaoseg;
    float pib, pibseg, area, areaseg;
    int pturisticos, pturisticosseg;
    float dpopulacional, dpopulacionalseg, pibcapita, pibcapitaseg;


printf("Oque acha de cadastrar suas cartas comigo. Bom vamos la:\n ");
printf("Cadastre o nome da cidade:\n ");
scanf("%s", &nome);

printf("Informe o numero de habitantes dessa cidade:\n ");
scanf("%lu", &populacao);

printf("Informe a área que essa cidade cobre:\n ");
scanf("%f", &area);

printf("Informe o pib dessa cidade:\n ");
scanf("%f", &pib);

printf("Me diga quantos pontos turisticos tem nessa cidade.\n");
scanf("%d", &pturisticos);

printf("Vamos cadastrar a segunda carta!!\n\n");

printf("Diga o nome da proxima cidade:\n");
scanf("%s", &nomeseg);

printf("Informe o numero de habitantes dessa cidade:\n ");
scanf("%lu", &populacaoseg);

printf("Informe a área que essa cidade cobre:\n ");
scanf("%f", &areaseg);

printf("Informe o pib dessa cidade:\n ");
scanf("%f", &pibseg);

printf("Me diga quantos pontos turisticos tem nessa cidade:\n");
scanf("%d", &pturisticosseg);

dpopulacional = populacao / area;
pibcapita = pib / populacao;
dpopulacionalseg = populacaoseg / areaseg;
pibcapitaseg = pibseg / populacaoseg;
 
printf("Cadastro concluido com sucesso!!\n\n");

rank1 = (populacao + area + pib + pturisticos + pibcapita); 
rank2 = (populacaoseg + areaseg + pibseg + pturisticosseg + pibcapitaseg);

printf("Rank: %f\n",rank1);
printf("Carta 1\n");
printf("Estado: A\n");
printf("Código: A01\n");
printf("Nome da cidade: %s\n", nome);
printf("população: %lu \n", populacao);
printf("Área: %f km² \n", area);
printf("PIB: %f bilhões de reais \n", pib);
printf("Número de pontos turísticos: %d\n", pturisticos);
printf("Densidade Populacional: %f hab/km²\n", dpopulacional);
printf("PIB per Capita: %f reais\n\n", pibcapita);


printf("Rank: %f\n",rank2);
printf("Carta 2\n");
printf("Estado: B\n");
printf("Código: B02\n");
printf("Nome da cidade: %s \n", nomeseg);
printf("população: %lu \n", populacaoseg);
printf("Área: %f km² \n", areaseg);
printf("PIB %f bilhões de reais \n", pibseg);
printf("Número de pontos turísticos: %d\n", pturisticosseg);
printf("Densidade Populacional: %f hab/km²\n", dpopulacionalseg);
printf("PIB per Capita: %f reais\n\n", pibcapitaseg);

printf("Batalha de cartas\n\n");

if(rank1 > rank2 ){
printf("Rank: Carta 1 (%s) venceu\n", nome);
}else if (rank1 < rank2){
printf("Rank: Carta 2 (%s) venceu \n", nomeseg);
}else{
printf("Houve um erro com o nome da cidade!\n");
}


if(populacao > populacaoseg){
printf("População: Carta 1 com (%lu) venceu \n", populacao);
}else if (populacao < populacaoseg){
printf("População: Carta 2  com (%lu) venceu \n",populacaoseg);
}else{
printf("Houve um empate!\n");
}

if(area > areaseg){
printf("Área: Carta 1 com (%f) venceu \n", area);
}else if (area < areaseg){
printf("Áera: Carta 2 com (%f) venceu \n", areaseg);
}else{
printf("Houve um empate!\n");
}

if(pib > pibseg){
printf("PIB: Carta 1 com (%f) venceu \n", pib);
}else if (pib < pibseg){
printf("PIB: Carta 2 com (%f) venceu \n",pibseg);
}else{
printf("Houve um empate!\n");
}

if(pturisticos > pturisticosseg){
printf("Pontos Turísticos: Carta 1 com (%d) venceu \n", pturisticos);
}else if (pturisticos < pturisticosseg){
printf("Pontos Turísticos: Carta 2 com (%d) venceu \n", pturisticosseg);
}else{
printf("Houve um empate!\n");
}

if(dpopulacional < dpopulacionalseg){
printf("Densidade Populacional: Carta 1 com (%f) venceu \n", dpopulacional);
}else if (dpopulacional > dpopulacionalseg){
printf("Densidade Populacional: Carta 2 com (%f) venceu \n", dpopulacionalseg);
}else{
printf("Houve um empate!\n");
}

if(pibcapita > pibcapitaseg){
printf("PIB per Capita: Carta 1 com (%f) venceu\n", pibcapita);
}else if (pibcapita < pibcapitaseg){
printf("PIB per Capita: Carta 2 com (%f) venceu\n\n\n", pibcapita);
}else{
printf("Houve um empate!\n");
}


return 0;
}
