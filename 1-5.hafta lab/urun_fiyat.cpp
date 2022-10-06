#include <stdio.h>

int main()
{
	float urun1=2.98,urun2=4.50,urun3=9.98,urun4=4.49,urun5=6.87;
	int satin1,satin2,satin3,satin4,satin5=0,islem;
	printf("almak istediginiz urunu yaziniz:\n(1-5)");
	while((islem=getchar())!=EOF){
	
	switch(islem)
	{
		case 'a': printf("1nolu urun satin alindi: %f\n",urun1); ++satin1;break;
		case 'b': printf("2nolu urun satin alindi: %f\n",urun2); ++satin2;break;
		case 'c': printf("3nolu urun satin alindi: %f\n",urun3); ++satin3;break;
		case 'd': printf("4nolu urun satin alindi: %f\n",urun4); ++satin4;break;
		case 'f': printf("5nolu urun satin alindi: %f\n",urun5); ++satin5;break;
		case '\n': case ' ':break;
		default : printf("yeni veri giriniz\n");

	}
								}
		printf("urun satislari\n");
		printf("satilan 1nolu urun:%d gelir:%f\n",satin1,satin1*urun1);
		printf("satilan 2nolu urun:%d gelir:%f\n",satin2,satin2*urun2);
		printf("satilan 3nolu urun:%d gelir:%f\n",satin3,satin3*urun3);
		printf("satilan 4nolu urun:%d gelir:%f\n",satin4,satin4*urun4);
		printf("satilan 5nolu urun:%d gelir:%f\n",satin5,satin5*urun5);
}
