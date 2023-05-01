#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( ) {
char s1[ 100 ];
char s[100];
scanf( "%s",&s);
sprintf( s1, "string:%6s\n", s);
printf( "%s\n%s\n", s,s1);
return 0;
} 
