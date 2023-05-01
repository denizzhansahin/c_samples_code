#include <stdio.h>
#include <ctype.h>
int main( ) {
printf( "%s\n%s\n%s\n%s\n%s\n\n", "islower için:",
islower( 'p' ) ? "p bir küçük harftir " :
"p bir küçük harf deðildir ",
islower( 'P' ) ? "P bir küçük harftir " :
"P bir küçük harf deðildir ",
islower( '5' ) ? "5 bir küçük harftir " :
"5 bir küçük harf deðildir ",
islower( '!' ) ? "! bir küçük harftir " :
"! bir küçük harf deðildir");

printf( "%s\n%s\n%s\n%s\n%s\n\n", "isupper için:",
isupper( 'D' ) ? "D bir büyük harftir " :
"D bir büyük harf deðildir",
isupper( 'd' ) ? "d bir büyük harftir " :
"d bir büyük harf deðildir",
isupper( '8' ) ? "8 bir büyük harftir " :
"8 bir büyük harf deðildir",
isupper( '$' ) ? "$ bir büyük harftir " :
"$ bir büyük harf deðildir" );
printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
"u nun büyük harfi ", toupper( 'u' ),
"7 nin büyük harfi ", toupper( '7' ),
"$ ýn büyük harfi ", toupper( '$' ),
"L nin küçük harfi ", tolower( 'L' ) );
return 0;
}
