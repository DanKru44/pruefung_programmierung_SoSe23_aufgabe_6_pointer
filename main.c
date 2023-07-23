#include <stdio.h>

typedef struct
{
	int info_1 ;
	float info_2 ;
	char info_3 ;
} meinstruct ;

void aendern_zahlen ( int *a_aendern , int *b_aendern , int *c_aendern , int groesse_des_array) 
{
	*a_aendern = 1 ;
	*b_aendern = 11 ;
	 for ( int i = 0 ; i < groesse_des_array ; i++ )
		 c_aendern [i] = c_aendern [i] + 10 ;
}

void aendern_struct ( meinstruct *e )
{
	e -> info_1 = 8 ;
	e -> info_2 = 2.92847 ;
	e -> info_3 = 'l' ;
}

int main ( ) 
{
	int a = 0, b = 10 ;
	int c [3] = { 20 , 30 , 40 } ;
	int *a_pointer = &a ;
	int *b_pointer = &b ;
	int array_groesse = sizeof ( c ) / sizeof ( c [1] ) ;
	
	meinstruct d =
	{
		.info_1 = 3 ,
		.info_2 = 6.93 ,
		.info_3 = 'd' 
	} ;

	printf ( "Werte vor der Übergabe der Pointer an die Funktion:\n" ) ;
	printf ( "a: %i ; b: %i \n" , a , b ) ;

	for ( int i  = 0 ; i < array_groesse ; i++ )
		printf ( "Array c an der Stelle %i : %i \n" , i , c [i] ) ; 
 
	printf ("struct: info_1 = %i , info_2 = %f , info_3 = %c\n\n" , d.info_1 , d.info_2 , d.info_3 ) ;

	printf ( "Werte nach der Uebergabe der Pointer an die Funktion:\n" ) ;

	aendern_zahlen ( a_pointer , b_pointer , c , array_groesse ) ;
	aendern_struct ( &d ) ; 

	printf ( "a: %i ; b: %i \n" , a , b ) ;

	for ( int i  = 0 ; i < array_groesse ; i++ )
		printf ( "Array c an der Stelle %i : %i \n" , i , c [i] ) ; 

	printf ("struct: info_1 = %i , info_2 = %f , info_3 = %c\n" , d.info_1 , d.info_2 , d.info_3 ) ;

}
