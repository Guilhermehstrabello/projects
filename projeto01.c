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
	printf("|----------------------------------|\n"); // Não funciona o voltar e fechar, precisa de update
	printf("|---Escolha uma operação abaixo----|\n");
 	printf("|[1]Adição-------------------------|\n");
 	printf("|[2]Subtração----------------------|\n");
 	printf("|[3]Multiplicação------------------|\n");
 	printf("|[4]Divisão------------------------|\n");
	printf("|[5]Voltar-------------------------|\n");
    printf("|----------------------------------|\n");
 	printf(":");
	scanf("%d", &op2);
	switch (op2)
	{
		case 1:
			system("cls");
			printf("Digite os números:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f + %.2f = %.2f \n",num1, num2, num1+num2);
		break;
	    case 2:
			system("cls");
			printf("Digite os números:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f - %.2f = %.2f \n",num1, num2, num1-num2);	    
		break;
	    case 3:
			system("cls");
		    printf("Digite os números:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f * %.2f = %.2f \n",num1, num2, num1*num2);			   
		break;
	    case 4:
			system("cls");
		    printf("Digite os números:\n");
			scanf("%f %f", &num1, &num2);
		    printf("%.2f / %.2f = %.2f \n",num1, num2, num1/num2);
		break;
		case 5:
			main();
		default:
			printf("Opção inválida!");
	}system("pause");
	} while (op2!=5);
}

void imc() //Cálculo de IMC
{
	float peso, altura, imc;
	int op3=0;
	printf("|-------------------------------------|\n");
	printf("|-----------Cálculo de IMC------------|\n");
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
		printf("O seu IMC é: %.2f ",imc);
		
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
		printf("Opção inválida!");
		break;
	}
}

void med() // Colocar a média conforme a quantidade de alunos
{
	float notas, mediaA;
	int i=1,op4=0;
	int alunos;
	do
	{
	system("cls");
	printf("|-------------------------------------|\n");
	printf("|-----------Cálculo de Média----------|\n");
	printf("|-----------[1]Continuar--------------|\n");
	printf("|-----------[2]Voltar-----------------|\n");
	printf("|-------------------------------------|\n");
	printf(":");
	scanf("%d", &op4);

	switch (op4)
	{
	case 1:
		printf("Informe o número de alunos:\n");
		scanf("%d", &alunos);
		while (i<=alunos)
		{
			printf("\n\nDigite a nota do %d º aluno:\n", i);
			scanf("%f", &notas);
			mediaA += notas/alunos;
			i++;
		}
		printf("A média da sala é = %.2f ",mediaA);
	break;

	case 2:
		main();
		break;
	default:
		printf("Opção inválida!");
	}
	}while (op4!=2);
}


int main() //Função principal
{
	setlocale(LC_ALL,"Portuguese");
	int op1=0;
	do
	{
		system("cls");
		printf("|------------------------------------------|\n");
		printf("|---Qual programa você deseja usar?--------|\n");
		printf("|---[1]Calculadora-------------------------|\n");
		printf("|---[2]Calculo de IMC----------------------|\n");
		printf("|---[3]Calculo de média--------------------|\n");
		printf("|---[4]Fechar------------------------------|\n");
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
		case 4:
			printf("Obrigado por utilizar o meu programinha!!");
			break;
    	default:
			printf("Opção inválida!");
    	}system("pause");
	} while (op1!=4);
}