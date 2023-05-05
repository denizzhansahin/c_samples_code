#include <stdio.h>
int main( ) {
char karakter = 'A';
char string[ ] = "Bu bir stringtir";
const char *stringPtr = "Bu da bir stringtir";
printf( "%c\n", karakter );
printf( "%s\n", "Bu bir stringtir " );
printf( "%s\n", string );
printf( "%s\n", stringPtr );
return 0; } 
