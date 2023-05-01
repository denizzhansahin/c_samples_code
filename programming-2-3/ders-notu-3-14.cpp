#include <stdio.h>
int main( ) {
char c, cumle[ 80 ];
int i = 0;
puts( "Metin girisi yapiniz: " );
while ( ( c = getchar( ) ) != '\n')
cumle[ i++ ] = c;
cumle[ i ] = '\0'; /* stringin sonuna null ekle */
puts( "\nGirilen metin:" );
puts( cumle );
return 0;
} 
