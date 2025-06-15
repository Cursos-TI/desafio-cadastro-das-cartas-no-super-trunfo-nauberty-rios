#include <stdio.h>
#include "CartasSuperTrunfo.h"
#include <string.h>

int main() {
    float rank1, rank2; //È O "SUPER PODER"
    char nome[50], nomeseg[50], rank;
    unsigned long int populacao, populacaoseg, gp;
    float area, areaseg;
    float pib, pibseg;
    int pturisticos, pturisticosseg, gt;
    float dpopulacional, dpopulacionalseg;
    float pibcapita, pibcapitaseg, resultadoseg;
    int resultado, , gc, gd, gpb, ga;

printf("Oque acha de cadastrar suas cartas comigo. Bom vamos la:\n" );
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

rank1 = (populacao + area + pib + pturisticos + pibcapita + resultadoseg); 
rank2 = (populacaoseg + areaseg + pibseg + pturisticosseg + pibcapitaseg + resultadoseg);



resultadoseg += 10(dpopulacional > dpopulacionalseg);
resultadoseg += 10(dpopulacional< dpopulacionalseg);


// USEI AQUI O IF E O ELSE SÒ PARA TERMINAR O "RANK" DE RESTO EU SEGUI A AULA
// O RANK SEGUE O PADRÂO DE "SUPER PODER" SOMANDO TODAS AS CARTAS
// VOU FAZER UMA ESTRUTURA QUE VAI DIMINUIR 100 PONTO DO VALOR DA CARTA QUE TIVER MAIS "DENSIDADE POPULACIONAL" ASSIM MOSTRANDO O RANK DA CARTA

//if (rank1 < 2.147.483.646){
 //   rank = s;
//}else if (rank1 < 536.870.911){
  //  rank = a;
//}else if (rank1 < 178.956.970){
  //  rank = b;
//}else {rank = c;
//}
//printf("classificaçao é %s", rank);


printf("Cadastro concluido com sucesso!!\n\n");

printf("Rank: %d\n",rank1);
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


printf("Rank: %d\n",rank2);
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
//printf("Rank:%f\n"resultado);
resultado = rank1 > rank2;
printf("População:%lu\n", gp);
gp = populacao > populacaoseg;
printf("Área: %d\n", ga);
ga = area > areaseg;
printf("PIB:%d\n", gpb);
gpb = pib > pibseg;
printf("Pontos Turísticos:%d\n", gt);
gt = pturisticos > pturisticosseg;
printf("Densidade Populacional:%d\n", gd);
gd = dpopulacional > dpopulacionalseg;
printf("PIB per Capita:%d\n", gc);
gc = pibcapita > pibcapitaseg;

return 0;
}
