#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int advinhacao(void){
	int n,valor_qualquer,valor_max,tentativas_feitas;
	tentativas_feitas = 0;

	
	printf("Gerando valor aleatorio \n");
	
	printf("Digite valor maximo\n");
	scanf("%d",&valor_max);
	srand(time(NULL));
	n=(rand()%valor_max);
	
	printf("%d",n);
	

	
	while(valor_qualquer!= n)
	{	
		tentativas_feitas++;
		printf("\nDigite valor qualquer para ser advinhado\n");
		scanf("%d",&valor_qualquer);
		
		if(valor_qualquer == n)
		{
			printf("voce acertou\n");
			printf("%d tentativas realizadas",tentativas_feitas);
		}
		if(valor_qualquer<n)
		{
			printf("valor digitado e menor");
		}
		if(valor_qualquer>n)
		{
			printf("valor digitado e maior");
		}
	}

	return 0;
}

int main(void)
{
	int op;
	char adv;
	while(true)
	{
		printf("Menu\n 1. Advinhacao\n 5.Sair");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
			adv = advinhacao();
			system("adv");
			break;
		
		case 5:
			exit(0);
			break;
		default:
		printf("Voce digitou valor invalido");
			break;
		}
	}
	
	
	
return 0;
		
}