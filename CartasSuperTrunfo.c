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


(printf("Rank: %f\n",rank2);
printf("Carta 2\n");
printf("Estado: B\n");
printf("Código: B02\n");
printf("Nome da cidade: %s \n", nomeseg);
printf("população: %lu \n", populacaoseg);
printf("Área: %f km² \n", areaseg);
printf("PIB %f bilhões de reais \n", pibseg);
printf("Número de pontos turísticos: %d\n", pturisticosseg);
printf("Densidade Populacional: %f hab/km²\n", dpopulacionalseg);
printf("PIB per Capita: %f reais\n\n", pibcapitaseg);)

printf("Batalha de cartas\n\n");

if(rank1 > rank2 ){
printf("Rank: Carta 1 (%s) venceu\n", nome);
}else {
printf("Rank: Carta 2 (%s) venceu \n", nomeseg);}

if(populacao > populacaoseg){
printf("População: Carta 1 (%lu) venceu \n", populacao);
}else{
printf("População: Carta 2 (%lu) venceu \n",populacaoseg);}

if(area > areaseg){
printf("Área: Carta 1 (%d) venceu \n", area);
}else{
printf("Áera: Carta 2 (%d) venceu \n", areaseg);}

if(pib > pibseg){
printf("PIB: Carta 1 (%d) venceu \n", pib);
}else{
printf("PIB: Carta 2 (%d) venceu \n",pibseg);}



if(pturisticos > pturisticosseg){
printf("Pontos Turísticos: Carta 1 (%d) venceu \n", pturisticos);
}else{
printf("Pontos Turísticos: Carta 2 (%d) venceu \n", pturisticosseg);}



if(dpopulacional < dpopulacionalseg){
printf("Densidade Populacional: Carta 1 (%d) venceu \n", dpopulacional);
}else{
printf("Densidade Populacional: Carta 2 (%d) venceu \n", dpopulacionalseg);}

if(pibcapita > pibcapitaseg){
printf("PIB per Capita: Carta 1 (%d) venceu\n", pibcapita);
}else{
printf("PIB per Capita: Carta 2 (%d) venceu\n\n\n", pibcapita);
}

return 0;
}
