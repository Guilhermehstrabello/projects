#include<stdio.h>
#include<locale.h>
#include<windows.h>

void calc() //Calculadora 
{
    setlocale(LC_ALL,"Portuguese");
	int op2=0;
	float num1, num2;
	do
	{
	system("cls");
	printf("|----------------------------------|\n"); // N�o funciona o voltar e fechar, precisa de update
	printf("|---Escolha uma opera��o abaixo----|\n");
 	printf("|[1]Adi��o-------------------------|\n");
 	printf("|[2]Subtra��o----------------------|\n");
 	printf("|[3]Multiplica��o------------------|\n");
 	printf("|[4]Divis�o------------------------|\n");
	printf("|[5]Voltar-------------------------|\n");
    printf("|----------------------------------|\n");
 	printf(":");
	scanf("%d", &op2);
	switch (op2)
	{
		case 1:
			printf("Digite os n�meros:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f + %.2f = %.2f \n",num1, num2, num1+num2);
		break;
	    case 2:
			printf("Digite os n�meros:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f - %.2f = %.2f \n",num1, num2, num1-num2);	    
		break;
	    case 3:
		    printf("Digite os n�meros:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f * %.2f = %.2f \n",num1, num2, num1*num2);			   
		break;
	    case 4:
		    printf("Digite os n�meros:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f / %.2f = %.2f \n",num1, num2, num1/num2);
		break;
		case 5:
			main();
		default:
			printf("Op��o inv�lida!");
	}
	}while (op2!=5);
	system("pause");
}

void imc() //C�lculo de IMC
{
	float peso, altura, imc;
	int op3=0;
	printf("|-------------------------------------|\n");
	printf("|-----------C�lculo de IMC------------|\n");
	printf("|-----------[1]Continuar--------------|\n");
	printf("|-----------[2]Voltar-----------------|\n");
	printf("|-------------------------------------|\n");
	printf(":");
	scanf("%d", &op3);
	switch (op3)
	{
		case 1:
			printf("Informe o seu peso:");
			scanf("%f",&peso);
			
			printf("Agora informe sua altura:");
			scanf("%f", &altura);
			
			imc= peso/(altura*altura);
			printf("O seu IMC �: %.2f ",imc);
			
			if(imc<18.5){
				printf("\nAbaixo do peso!\n");
			}
			else if (imc>=18.5 && imc<25){
				printf("\nPeso normal!\n");
			}
			else if (imc>=25 && imc<=30){
				printf("\nAcima do peso!\n");
			}
			else{
				printf("\nObeso!\n");
			}
			break;
		case 2:
			main();
		default:
				printf("Op��o inv�lida!");
			break;
	}
}

void med() // Colocar a m�dia conforme a quantidade de alunos
{
	float notas, mediaA;
	int i=1,op4=0;
	int alunos;
	do
	{
		system("cls");
		printf("|-------------------------------------|\n");
		printf("|-----------C�lculo de M�dia----------|\n");
		printf("|-----------[1]Continuar--------------|\n");
		printf("|-----------[2]Voltar-----------------|\n");
		printf("|-------------------------------------|\n");
		printf(":");
		scanf("%d", &op4);

		switch (op4)
		{
		case 1:
			printf("Informe o n�mero de alunos:\n");
			scanf("%d", &alunos);
			while (i<=alunos)
			{
				printf("\n\nDigite a nota do %d � aluno:\n", i);
				scanf("%f", &notas);
				mediaA += notas/alunos;
				i++;
			}
			printf("A m�dia da sala � = %.2f ",mediaA);
		break;

		case 2:
			main();
			break;
		default:
			printf("Op��o inv�lida!");
		}
	}while (op4!=2);
}


int main() //Fun��o principal
{
	setlocale(LC_ALL,"Portuguese");
	int op1=0;
	do
	{
		system("cls");
		printf("|------------------------------------------|\n");
		printf("|---Qual programa voc� deseja usar?--------|\n");
		printf("|---[1]Calculadora-------------------------|\n");
		printf("|---[2]Calculo de IMC----------------------|\n");
		printf("|---[3]Calculo de m�dia--------------------|\n");
		printf("|---[4]Fechar------------------------------|\n");
		printf("|------------------------------------------|\n");
		printf(":");
		scanf("%d", &op1);
    	switch (op1)
    	{
    	case 1:
			system("cls");
        	calc();
        	break;
		case 2:
			imc();
			break;
		case 3:
			med();
			break;
		case 4:
			printf("Obrigado por utilizar o meu programinha!!\n");
			break;
    	default:
			printf("Op��o inv�lida!");
			break;
    	}
	} while (op1!=4);
system("Pause");
}