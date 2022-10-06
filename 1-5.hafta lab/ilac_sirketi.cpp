#include <stdio.h>

int main()
{
	float net_para = 200.0;
	float satis_para = 0.0;
	
	while(satis_para!=-1)
	{
		printf("dolar cinsinden satis tutari giriniz : "); scanf("%f",&satis_para);
		if(satis_para!=-1)
		{
			float haftalik_gelir = net_para + ((satis_para/100)*9);
			printf("bu haftaki gelir : %.2f $\n", haftalik_gelir);
			printf("bu haftaki komisyondan kazanilmis para : %.2f $\n\n",((satis_para/100)*9));
		}

	}
	
}
