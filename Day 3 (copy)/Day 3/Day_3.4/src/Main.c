#include<stdio.h>
#include"../include/Calculator.h"

void accept_record( int *ptrNumber )
{
	printf("Enter number	:	");
	scanf("%d", ptrNumber);
}
void print_record( int *ptrResult )
{
	printf("Result	:	%d\n", *ptrResult);
}
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Sum\n");
	printf("2.Sub\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter choice	:	");
	scanf("%d", & choice);
	return choice;
}
int main( void )	//Calling Function
{
	int choice, num1, num2;
	while( ( choice = menu_list( ) ) != 0 )
	{
		accept_record(&num1);
		accept_record(&num2);
		int result = 0;
		switch( choice )
		{
		case 1:
			result = sum(num1, num2);
			break;
		case 2:
			result = sub(num1, num2);
			break;
		case 3:
			result = multiplication(num1, num2);
			break;
		case 4:
			result = division(num1, num2);
			break;
		}
		print_record(&result);
	}
	return 0;
}


