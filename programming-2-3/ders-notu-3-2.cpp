#include <stdio.h>
#include <ctype.h>
int main( ) {
printf( "%s\n%s\n%s\n%s\n%s\n\n", "islower i�in:",
islower( 'p' ) ? "p bir k���k harftir " :
"p bir k���k harf de�ildir ",
islower( 'P' ) ? "P bir k���k harftir " :
"P bir k���k harf de�ildir ",
islower( '5' ) ? "5 bir k���k harftir " :
"5 bir k���k harf de�ildir ",
islower( '!' ) ? "! bir k���k harftir " :
"! bir k���k harf de�ildir");

printf( "%s\n%s\n%s\n%s\n%s\n\n", "isupper i�in:",
isupper( 'D' ) ? "D bir b�y�k harftir " :
"D bir b�y�k harf de�ildir",
isupper( 'd' ) ? "d bir b�y�k harftir " :
"d bir b�y�k harf de�ildir",
isupper( '8' ) ? "8 bir b�y�k harftir " :
"8 bir b�y�k harf de�ildir",
isupper( '$' ) ? "$ bir b�y�k harftir " :
"$ bir b�y�k harf de�ildir" );
printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
"u nun b�y�k harfi ", toupper( 'u' ),
"7 nin b�y�k harfi ", toupper( '7' ),
"$ �n b�y�k harfi ", toupper( '$' ),
"L nin k���k harfi ", tolower( 'L' ) );
return 0;
}
