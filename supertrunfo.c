
#include <stdio.h>
	int main(){
	//Variáveis carta 1
	char cid1[50];
	int pop1;
	float km1;
	float pib1;
	int tur1;
	//Variáveis carta 2
	char cid2[50];
	int pop2;
	float km2;
	float pib2;
	int tur2;
	//Identificação dos dados da carta 1
	printf("#### Carta 1 ####\n");
	printf("Estado: A\n");
	printf("Código: A01\n");
	
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

	//Identificação dos dados da carta 2
	printf("#### Carta 2 ####\n");
	printf("Estado: B\n");
	printf("Código: B02\n");
	
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