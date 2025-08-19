#include <stdio.h>
	int main(){
	//Variáveis carta 1
	char est1[50];
	char cid1[50];
	char cod1[10]="A01";
	int pop1;
	float km1;
	float pib1;
	int tur1;
	float denspop1;
	float pibcapta1;
	//Variáveis carta 2
	char est2[50];
	char cid2[50];
	char cod2[10]="B01";
	int pop2;
	float km2;
	float pib2;
	int tur2;
	float denspop2;
	float pibcapta2;
	//Identificação dos dados da carta 1
	printf("#### Carta 1 ####\n");
	
	printf("Estado: ");
	fgets(est1, 50, stdin);
	
	printf("Código: %s\n", cod1);
	
	printf("Nome da cidade: ");
	fgets(cid2, 50, stdin);	
	
	printf("População total: ");
	scanf("%i", &pop1);
	
	printf("Área(km²): ");
	scanf("%f", &km1);
	
	printf("PIB: ");
	scanf("%f", &pib1);

	printf("Pontos turísticos: ");
	scanf("%i", &tur1);

	printf("Densidade populacional: %.2f\n", pop1/km1);

	printf("PIB per capta: %.2f\n", pib1/pop1);
	
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

	printf("Densidade populacional: %.2f\n", pop2/km2);

	printf("PIB per capta: %.2f\n", pib2/pop2);
return 0;
}