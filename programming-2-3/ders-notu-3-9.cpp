#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
setlocale(LC_ALL, "Turkish");
long l;
l = atol( "1000000" );
printf( "\n %s%ld\n %s%ld\n",
"\"1000000\" stringi long int tipine �evrildi ", l,
"�evrilen de�erin 2' ye b�l�m�: ", l / 2 );
return 0;
} 
