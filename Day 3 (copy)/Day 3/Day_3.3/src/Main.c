#include<stdio.h>
#include<stdlib.h>

int compare( const void* p1,const void* p2)
{
	const int *ptrNum1 = ( const int * )p1;
	const int *ptrNum2 = ( const int * )p2;
	if( *ptrNum1 < *ptrNum2 )
		return -1;
	else if( *ptrNum1 > *ptrNum2 )
		return 1;
	else
		return 0;
}

void print_record( int *arr, const int size )
{
	for( int index = 0; index < size; ++ index )
		printf("%d	", arr[ index ]);
	printf("\n");
}

int main( void )
{
	int arr[ 5 ] = { 50, 10, 30, 20, 40 };

	print_record( arr, 5 );

	qsort(arr, 5, sizeof( int ), compare);

	print_record( arr, 5 );
	return 0;
}
