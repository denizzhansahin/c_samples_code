#include <stdio.h>
int main( ) {
char cumle[ 80 ];
void ters( const char * const );
printf( "Metin girisi yapiniz:\n" );
gets( cumle );
printf( "\nGirdiginiz metin tersten yazildiginda:\n" );
ters( cumle);
return 0;
} 

void ters( const char * const sPtr ) {
if ( sPtr[ 0 ] == '\0' )
return;
else {
ters( &sPtr[ 1 ] );
putchar( sPtr[ 0 ] );
}
}
