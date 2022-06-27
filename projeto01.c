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

main()
{
	setlocale(LC_ALL,"Portuguese");
	int op1;
	char ops;
    printf("|------------------------------------------|\n");
	printf("|---Qual programa você deseja usar?--------|\n");
 	printf("|---[Q]Calculadora-------------------------|\n");
 	printf("|---[W]Calculo de IMC----------------------|\n");
 	printf("|---[E]Calculo de média--------------------|\n");
 	printf("|---[0]Fechar------------------------------|\n");
    printf("|------------------------------------------|\n");
    printf(":");   
    scanf("%c", &ops);

    switch (ops)
    {
    case 'Q':
        calc();
        break;
    
    default:
        break;
    }
    
    return 0;
}