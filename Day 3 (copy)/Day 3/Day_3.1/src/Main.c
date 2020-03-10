#include<stdio.h>
int sum( int num1, int num2 )
{
	int result = num1 + num2;
	return result;
}
int sub( int num1, int num2 )
{
	int result = num1 - num2;
	return result;
}
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Sum\n");
	printf("2.Sub\n");
	printf("Enter choice	:	");
	scanf("%d", &choice);
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = menu_list( ) ) != 0 )
	{
		int (*ptr)( int, int ) = NULL;
		switch( choice )
		{
		case 1:
			ptr = sum;
			break;
		case 2:
			ptr = sub;
			break;
		}
		if( ptr != NULL )
		{
			int result = ptr( 100,20);
			printf("Result	:	%d\n",result);
		}
	}
	return 0;
}
