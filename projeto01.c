#include<stdio.h>
#include<locale.h>

void calc()
{
    float num1, num2;
	int op;
    do
    {
    printf("|----------------------------------|\n");
	printf("|---Escolha uma opera��o-----------|\n");
 	printf("|[1]Adi��o-------------------------|\n");
 	printf("|[2]Subtra��o----------------------|\n");
 	printf("|[3]Multiplica��o------------------|\n");
 	printf("|[4]Divis�o------------------------|\n");
 	printf("|[0]Fechar-------------------------|\n");
    printf("|----------------------------------|\n");
 	
 	printf(":");
	scanf(" %d", &op);
	printf("Digite os n�meros: \n");
	scanf("%f %f", &num1, &num2);
	switch(op)
	    {
		    case '+':
			    printf("A sua soma �: %.2f \n", num1+num2);
			    break;
			
		    case '-':
			    printf("A sua subtra��o �: %.2f \n", num1-num2);
			    break;
			
		    case '*':
			    printf("A sua multiplica��o �: %.2f \n", num1*num2);
			    break;
			
		    case '/':
			    printf("A sua divis�o �: %.2f \n", num1/num2);
			    break;
        
            case '0':
                printf("Obrigado por usar nossa calculadora!!");
                break;
		
		    default:
			    printf("Op��o Inv�lida");
	    }

    }while (op!=0);
}


main()
{
    int op1;
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
    case '1':
        calc();
        break;
    
    default:
        break;
    }
    
    return 0;
}