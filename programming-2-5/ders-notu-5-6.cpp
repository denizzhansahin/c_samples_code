#include <stdio.h>
int main( ) {
int i = 873;
double f = 123.456789;
char s[ ] = "Nice Yillaraaa";
printf( "Tam sayilarda duyarlik kullanimi\n" );
printf( "\t%.4d\n\t%.9d\n\n", i, i );
printf( "Ondalikli sayilarda duyarlik kullanimi\n" );
printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );
printf( "Stringlerde duyarlik kullanimi\n" );
printf( "\t%.11s\n", s );

printf ( " %9.3f " , 123.456789 ) ;
printf ( " %*.*f " , 7 , 2 , 98.736 ) ;
return 0; } 
