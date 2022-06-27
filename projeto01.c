#include<stdio.h>
#include<locale.h>

void calc()
{
    setlocale(LC_ALL,"Portuguese");
	float num1, num2;
	int op;
    do
    {
    printf("|----------------------------------|\n");
	printf("|---Escolha uma operação-----------|\n");
 	printf("|[1]Adição-------------------------|\n");
 	printf("|[2]Subtração----------------------|\n");
 	printf("|[3]Multiplicação------------------|\n");
 	printf("|[4]Divisão------------------------|\n");
 	printf("|[0]Fechar-------------------------|\n");
    printf("|----------------------------------|\n");
 	
 	printf(":");
	scanf(" %d", &op);
	printf("Digite os números: \n");
	scanf("%f %f", &num1, &num2);
	switch(op)
	    {
		    case 1:
			    printf("A sua soma é: %.2f \n", num1+num2);
			    break;
			
		    case 2:
			    printf("A sua subtração é: %.2f \n", num1-num2);
			    break;
			
		    case 3:
			    printf("A sua multiplicação é: %.2f \n", num1*num2);
			    break;
			
		    case 4:
			    printf("A sua divisão é: %.2f \n", num1/num2);
			    break;
        
            case 0:
                printf("Obrigado por usar nossa calculadora!!");
                break;
		
		    default:
			    printf("Opção Inválida");
	    }

    }while (op!=0);
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int op1;
	do
	{
		printf("|------------------------------------------|\n");
		printf("|---Qual programa você deseja usar?--------|\n");
		printf("|---[1]Calculadora-------------------------|\n");
		printf("|---[2]Calculo de IMC----------------------|\n");
		printf("|---[3]Calculo de média--------------------|\n");
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

			break;
		case 3:

			break;
		case 0:
			printf ("Obrigado por utilizar nosso programa!!");
			break;
    	default:
			printf("Opção inválida!");
    	}
    return 0;
	} while (op1!=0);
}