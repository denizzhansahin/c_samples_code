#include <stdio.h>

int main(){
	float sayi = 12.4234234;
	printf("%f\n",sayi);
	printf("%.1f\n",sayi);
	printf("%.2f\n",sayi);
	printf("%.3f\n",sayi);
	printf("%.7f\n\n----\n",sayi);

	float sayi1 = 12.499999;
	printf("%f\n",sayi1);
	printf("%.1f\n",sayi1);
	printf("%.2f\n",sayi1);
	printf("%.3f\n",sayi1);
	printf("%.6f\n",sayi1);
	
	printf("\n-----\n");
	int nott = 15;
	nott>=60 ? printf("%d, 60'dan buyuk\n",nott) : printf("%d, 60'dan kucuk\n",nott);
	nott>= 3 ? printf("%d, 3'den buyuk\n",nott) : printf("%d, 3'den kucuk\n",nott);
	printf("-------\n");
	int aga_naptin_knk = 789;
	printf("%s\n",aga_naptin_knk>=800?"789 sayisi 800den buyuk\n": "789 sayisi 800den kucuk\n");
	printf("%s\n",aga_naptin_knk>=700?"789 sayisi 700den buyuk\n": "789 sayisi 800den buyuk\n");

}
