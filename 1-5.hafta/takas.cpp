#include <stdio.h>

int main(){
	
int a = 12;
int b = 24;
int c = 0;

printf("a degeri: \t %d \n", a);
printf("b degeri : \t %d \n",b);
printf("Ara degisken: \t %i \n", c);

printf("a ve b yer degistirecektir\n");
c = a;
a = b;
b = c;
printf("a degeri: \t %d \n", a);
printf("b degeri: \t %d \n",b);
printf("ara deger: \t %d \n", c);
printf("ara deger bu takas isleminde a'nin degerini aldi'");
}
