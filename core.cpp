#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numerosinteiros(){
	
	int maior, menor, numero;
	
	scanf("%d", &numero);
	maior = numero;
	menor = numero;
	
	while (numero!=0) {
		scanf("%d", &numero);
		
		if((numero < menor) && (numero != 0)) {
			menor = numero;
		}
		if((numero > maior) && (numero != 0)) {
			maior = numero;
		}
	}
	
	if (menor == 0) {
		printf("Nenhum numero foi digitado");
	} else {
		printf("Maior numero digitado: %d\n", maior);
		printf("Menor numero digitado: %d\n", menor);
	}
	return 0;
}

int fatorial()
{
	int fat, n;
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);
	 
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;  
	 
	printf("\nFatorial calculado: %d", fat);
	return 0;
}

int advinhacao(){
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
int salario(){
	int salario,horas,valor_hora,vd,valor_extra,dependentes,salario_bruto,horaex,salario_mes;
	printf("digite o valor do salario minimo: \n");
	scanf("%d", &salario);
	printf("digite o numero de horas trabalhadas:\n");
	scanf("%d", &horas);
    printf("digite o valor das horas extras trabalhadas:\n");
    scanf("%d", &horaex);
    printf("digite a quantidade de dependentes:\n");
    scanf("%d", &dependentes);
	valor_hora=(0.1*salario);
	salario_mes=(horas*valor_hora);
	vd=(dependentes*32);
	valor_extra=(valor_hora+(valor_hora*0.5));
	salario_bruto=(salario_mes+vd+valor_extra);	
	printf("salario bruto é iqual a %d",&salario_bruto);
}
int main(void)
{
	int op;
	char adv,fator,numint,salar;
	while(true)
	{
		printf("Menu\n 1.Numeros Inteiros \n 2. Fatorial \n 3. Advinhacao\n 4. Calculo de salario \n 5.Sair \n op: ");
		scanf("%d",&op);
		switch(op)
		{
			
		case 1:
			numint = numerosinteiros();
			system("numint");
			break;
		
		case 2:
		fator = fatorial();
		system("fator");
		break;

		case 3:
			adv = advinhacao();
			system("adv");
			break;
	
		case 4:
		salar = salario();
		system("salar");
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