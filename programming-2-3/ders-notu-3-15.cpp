#include <stdio.h>
int main( ) {
char s[ 80 ];
int x; double y;
printf( " integer ve double tipte deger girin:\n" );
scanf( "%d%lf", &x, &y );
sprintf( s, "integer:%6d\ndouble:%8.2f", x, y );
printf( "%s\n%s\n", "s dizisinde saklanan cikti: ", s );
return 0;
} 
