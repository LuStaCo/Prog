#include <stdio.h>
	int main(){
//Variáveis carta 1
	char est1[50];
	char cid1[50];
	char cod1[10]="A01";
	unsigned int pop1;
	float km1;
	float pib1;
	int tur1;
	float denspop1;
	float pibcapta1;
	float poder01;
//Variáveis carta 2
	char est2[50];
	char cid2[50];
	char cod2[10]="B01";
	unsigned int pop2;
	float km2;
	float pib2;
	int tur2;
	float denspop2;
	float pibcapta2;
	float poder02;
//Identificação dos dados da carta 1
	printf("#### Carta 1 ####\n");
	
	printf("Estado: ");
	fgets(est1, 50, stdin);
	
	printf("Código: %s\n", cod1);
	
	printf("Nome da cidade: ");
	fgets(cid1, 50, stdin);	
	
	printf("População total: ");
	scanf("%i", &pop1);
	
	printf("Área(km²): ");
	scanf("%f", &km1);
	
	printf("PIB: ");
	scanf("%f", &pib1);

	printf("Pontos turísticos: ");
	scanf("%i", &tur1);

	denspop1 = (float)pop1/km1;
	printf("Densidade populacional: %.2f\n", denspop1);

	pibcapta1 = (float)pib1/pop1;
	printf("PIB per capta: %.2f\n", pibcapta1);

	poder01 = (float)pop1 + km1 + pib1 + tur1;
	printf("Super poder da carta: %.2f\n ", poder01);
	
//Identificação dos dados da carta 2
	printf("#### Carta 2 ####\n");
	
	printf("Estado: ");
	scanf("%s", &est2);

	printf("Código: %s\n", cod2);
	
	printf("Nome da cidade: ");
	scanf("%s", &cid2);
	
	printf("População total: ");
	scanf("%i", &pop2);
	
	printf("Área(km²): ");
	scanf("%f", &km2);
	
	printf("PIB: ");
	scanf("%f", &pib2);

	printf("Pontos turísticos: ");
	scanf("%i", &tur2);

	denspop2 = (float)pop2/km2;
	printf("Densidade populacional: %.2f\n", denspop2);

	pibcapta2 = (float)pib2/pop2;
	printf("PIB per capta: %.2f\n", pibcapta2);

	poder02 = (float)pop2 + km2 + pib2 + tur2;
	printf("Super poder da carta: %.2f\n ", poder02);
//Comparativo entre os atributos de cada carta
	printf("#### Comparação dos atribuitos ####\n");
	if (pop1 > pop2) {
        printf("População: carta %s vencedora.\n", cod1);
    } else {
        printf("População: carta %s vencedora.\n", cod2);
    }
	if (km1 > km2) {
        printf("Área(km²):carta %s vencedora.\n", cod1);
    } else {
        printf("Área(km²):carta %s vencedora.\n", cod2);
    }
	if (pib1 > pib2) {
        printf("PIB: carta %s vencedora.\n", cod1);
    } else {
        printf("PIB: carta %s vencedora.\n", cod2);
    }
	if (tur1 > tur2) {
        printf("Ponto turístico: carta %s vencedora.\n", cod1);
    } else {
        printf("Ponto turístico: carta %s vencedora.\n", cod2);
    }
	if(denspop1 > denspop2){
		printf("Densidade populacional: carta %s vencedora.\n", cod1);
	} else {
		printf("Densidade populacional: carta %s vencedora.\n", cod2);
	}
	if(pibcapta1 > pibcapta2){
		printf("PIB per capita: carta %s vencedora.\n", cod1);
	} else{
		printf("PIB per capita: carta %s vencedora.\n", cod2);
	}
	if(poder01 > poder02){
		printf("Super poder: carta %s vencedora.", cod1);
	} else {
		printf("Super poder: carta %s vencedora", cod2);
	}
return 0;
}