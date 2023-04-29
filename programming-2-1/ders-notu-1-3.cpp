#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10

int main()
{
	float sayilar[BOYUT] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	float *nPtr = sayilar;
	
	printf("dizi belirteci ile yazdir\n");
	for(int i=0;i<10;i++)
	printf("sayilar[%d] == %.2f\n",i,sayilar[i]);
	
	printf("\nisaretci dizi/offset ile yazdir\n");
	for(int i=0;i<10;i++)
	printf("*(sayilar+%d) == %.2f\n",i,*(sayilar+i));
	
	printf("\nisaretci/offset ile yazdir\n");
	for(int i=0;i<10;i++)
	printf("(nPtr+%d) == %.2f\n",i,(nPtr+i));

	printf("\nisaretci/belirtec ile yazdir\n");
	for(int i=0;i<10;i++)
	printf("nPtr[%d] == %.2f\n",i,nPtr[i]);	
	
	return 0;
}
