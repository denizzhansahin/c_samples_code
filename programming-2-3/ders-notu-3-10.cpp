#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
setlocale(LC_ALL, "Turkish"); // NULL deðeri ile deðiþtir
double d;
const char *string = "51.2% kabul edildi";
char *stringPtr;
d = strtod( string, &stringPtr );
printf( "string: \"%s\"\n", string );
printf( "double %.2f ve string \"%s\"e dönüþtürüldü.\n",
d, stringPtr );
return 0;
} 
