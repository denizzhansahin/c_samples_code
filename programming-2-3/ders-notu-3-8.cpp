#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
setlocale(LC_ALL, "Turkish");
int i;
i = atoi( "2593" );
printf( "\n %s%d\n %s%d\n",
"\"2593\" stringi int tipine d�n��t�r�ld�: ", i,
"D�n��t�r�len say� eksi 593: ", i - 593 );
return 0;
} 
