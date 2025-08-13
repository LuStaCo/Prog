
#include <stdio.h>
	int main(){
	//Variáveis carta 1
	char est1[50];
	char cid1[50];
	char cod1={"A01","A02","A03","A04"};
	int pop1;
	float km1;
	float pib1;
	int tur1;
	//Variáveis carta 2
	char est2[50];
	char cid2[50];
	char cod2={"B01","B02","B03","B04"};
	int pop2;
	float km2;
	float pib2;
	int tur2;
	//Identificação dos dados da carta 1
	printf("#### Carta 1 ####\n");
	printf("Estado: ");
	fgets(est1, 50, stdin);

	printf("Código: %s", cod1[1]);
	
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

	//Identificação dos dados da carta 2
	printf("#### Carta 2 ####\n");
	printf("Estado: ");
	fgets(est2, 50, stdin);

	printf("Código: %s", B[1]);
	
	printf("Nome da cidade: ");
	fgets(cid2, 50, stdin);
	
	printf("População total: ");
	scanf("%i", &pop2);
	
	printf("Área(km²): ");
	scanf("%f", &km2);
	
	printf("PIB: ");
	scanf("%f", &pib2);
	
	printf("Pontos turísticos: ");
	scanf("%i", &tur2);
	return 0;
}