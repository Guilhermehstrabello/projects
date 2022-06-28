#include<stdio.h>
#include<locale.h>

void calc() //Calculadora 
{
    setlocale(LC_ALL,"Portuguese");
	float num1, num2;
	int op;
    printf("|----------------------------------|\n"); // N�o funciona o voltar e fechar, precisa de update
	printf("|---Qual opera��o deseja?----------|\n");
 	printf("|[1]Adi��o-------------------------|\n");
 	printf("|[2]Subtra��o----------------------|\n");
 	printf("|[3]Multiplica��o------------------|\n");
 	printf("|[4]Divis�o------------------------|\n");
	printf("|[0]Voltar-------------------------|\n");
    printf("|----------------------------------|\n");
 	
 	printf(":");
	scanf("%i",&op);

	printf("Digite os n�meros: \n");
	scanf("%f %f", &num1, &num2);
	switch (op)
	{
		case 1:
		    printf("A sua soma �: %.2f \n\n", num1+num2);
		break;
	    case 2:
		    printf("A sua subtra��o �: %.2f \n\n", num1-num2);		    
		break;
	    case 3:
		    printf("A sua multiplica��o �: %.2f \n\n", num1*num2);			   
		break;
	    case 4:
		    printf("A sua divis�o �: %.2f \n\n", num1/num2);
		break;
		case 0:
			main();
		default:
			printf("Op��o inv�lida!");
	}
}

void imc() //C�lculo de IMC
{
	float peso, altura, imc;
	int op2;
	printf("|-------------------------------------|\n");
	printf("|-----------C�lculo de IMC------------|\n");
	printf("|-----------[1]Continuar--------------|\n");
	printf("|-----------[0]Voltar-----------------|\n");
	printf("|-------------------------------------|\n");
	printf(":");
	scanf("%d", &op2);
	switch (op2)
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

	case 0:
		main();
	default:
		printf("Op��o inv�lida!");
		break;
	}
}

void med() // Colocar a m�dia conforme a quantidade de alunos
{
	float notas, mediaA;
	int i=1,op3;
	int alunos;
	printf("|-------------------------------------|\n");
	printf("|-----------C�lculo de M�dia----------|\n");
	printf("|-----------[1]Continuar--------------|\n");
	printf("|-----------[0]Voltar-----------------|\n");
	printf("|-------------------------------------|\n");
	printf(":");
	scanf("%d", &op3);

	switch (op3)
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

	case 0:
		main();
	default:
		printf("Op��o inv�lida!");
		break;
	}
}


int main() //Fun��o principal
{
	setlocale(LC_ALL,"Portuguese");
	int op1;
	do
	{
		printf("|------------------------------------------|\n");
		printf("|---Qual programa voc� deseja usar?--------|\n");
		printf("|---[1]Calculadora-------------------------|\n");
		printf("|---[2]Calculo de IMC----------------------|\n");
		printf("|---[3]Calculo de m�dia--------------------|\n");
		printf("|---[0]Fechar------------------------------|\n");
		printf("|------------------------------------------|\n");
		printf(":");   
		scanf("%d", &op1);

    	switch (op1)
    	{
    	case 1:
        	calc();
        	break;
		case 2:
			imc();
			break;
		case 3:
			med();
			break;
		case 0:
			printf ("Obrigado por utilizar nosso programa!!");
			break;
    	default:
			printf("Op��o inv�lida!");
    	}
	} while (op1!=0);
}