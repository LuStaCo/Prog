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
	//Variáveis carta 2
	char est2[50];
	char cid2[50];
	char cod2[10]="B01";
	int pop2;
	float km2;
	float pib2;
	int tur2;
	//Identificação dos dados da carta 1
	printf("#### Carta 1 ####\n");
	
	printf("Estado: ");
	fgets(est1, 50, stdin);
	
	printf("Código: %s\n", cod1);
	
	printf("Nome da cidade: ");
	fgets(cid2, 50, stdin);	
	
	printf("População total: ");
	scanf("%d", &pop1);
	
	printf("Área(km²): ");
	scanf("%f", &km1);
	
	printf("PIB: ");
	scanf("%f", &pib1);
	
	printf("Pontos turísticos: ");
	scanf("%d", &tur1);
	
	//Identificação dos dados da carta 2
	printf("#### Carta 2 ####\n");
	
	printf("Estado: ");
	//gets(est2, 50, stdin);
	scanf("%s", &est2);

	printf("Código: %s\n", cod2);
	
	printf("Nome da cidade: ");
	//fgets(cid2, 50, stdin);
	scanf("%s", &cid2);
	
	printf("População total: ");
	scanf("%d", &pop2);
	
	printf("Área(km²): ");
	scanf("%f", &km2);
	
	printf("PIB: ");
	scanf("%f", &pib2);
	
	printf("Pontos turísticos: ");
	scanf("%d", &tur2);
return 0;
}