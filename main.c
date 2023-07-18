#include <stdio.h>

void aendern_zahlen ( int *a_aendern , int *b_aendern , int *c_aendern , int groesse_des_array) 
{
	*a_aendern = 1 ;
	*b_aendern = 11 ;
	 for ( int i = 0 ; i < groesse_des_array ; i++ )
		 c_aendern [i] = c_aendern [i] + 10 ;
}


int main ( ) 
{
	int a = 0, b = 10 ;
	int c [3] = { 20 , 30 , 40 } ;
	int *a_pointer = &a ;
	int *b_pointer = &b ;
	int array_groesse = sizeof ( c ) / sizeof ( c [1] ) ;

	printf ( "Zahlen vor der Übergabe der Pointer an die Funktion:\n" ) ;
	printf ( "a: %i ; b: %i \n" , a , b ) ;

	for ( int i  = 0 ; i < array_groesse ; i++ )
		printf ( "c an der Stelle %i : %i \n" , i , c [i] ) ; 

	printf ( "\nZahlen nach der Uebergabe der Pointer an die Funktion:\n" ) ;

	aendern_zahlen ( a_pointer , b_pointer , c , array_groesse ) ;

	printf ( "a: %i ; b: %i \n" , a , b ) ;

	for ( int i  = 0 ; i < array_groesse ; i++ )
		printf ( "c an der Stelle %i : %i \n" , i , c [i] ) ; 


}
