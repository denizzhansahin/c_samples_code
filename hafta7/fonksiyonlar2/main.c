#include <stdio.h>
void carp2(int , int);
void main()
{
carp2(10,20);
carp2(5,6);
carp2(8,9);
deniz();
deniz2();
}
void carp2(int x, int y)
{
printf ("%2d * %2d = %3d\n", x, y, x*y);

}


int carp( int , int );
void deniz()
{ int a, b, c;
printf("Birinci sayiyi gir:");scanf("%d", &a);
printf("Ikinci sayiyi gir:");scanf("%d", &b);
c = carp(a, b);
printf("Carpim: %d\n", c);
}
int carp(int x, int y) /* fonksiyon */
{ int sonuc; sonuc= x * y; return sonuc; }

int maksimum( int, int, int );
int deniz2( ) {
int a, b, c;
printf( "3 tamsayı giriniz: " );
scanf( "%d%d%d", &a, &b, &c );
printf( "Maksimum : %d dir.\n",maksimum( a, b, c ) );
return 0;
}
int maksimum( int x, int y, int z ) { int maks = x;
if ( y > maks ) maks = y;
if ( z > maks ) maks = z;
return maks;
}
