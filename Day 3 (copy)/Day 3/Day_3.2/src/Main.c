#include<stdio.h>
#include<stdlib.h>
void accept_record( int *ptrNumber )
{
	printf("Enter number	:	");
	scanf("%d",ptrNumber);
}
typedef void (*Error)( const char* );
int calculate( int num1, int num2, Error error )
{
	if( num2 == 0 )
	{
		error("/by zero");
		exit( 0 );
	}
	return num1 / num2;
}
void print_record( int *ptrResult )
{
	printf("Result	:	%d\n", *ptrResult);
}
void print_message( const char *message )
{
	printf("%s\n", message);
}

int main( void )
{
	int num1;
	accept_record( &num1 );
	int num2;
	accept_record(&num2);
	int result = calculate( num1, num2, print_message);
	print_record( &result );
	return 0;
}
