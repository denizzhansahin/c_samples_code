#include <stdio.h>

int main()
{
	int gun = 0;
	float oran = 0;
	float anapara = 0;
	float faiz_ucreti = 0;
	
	while(anapara!=-1)
	{

			printf("anaparayi girin(cikis icin -1):\t"),
			scanf("%f",&anapara);
			if(anapara!=-1)
			{
				printf("faiz oranini giriniz:\t");
				scanf("%f",&oran);
				printf("kac gunluk faiz: \t");
				scanf("%d",&gun);
				faiz_ucreti = anapara*oran*gun/365;
				printf("faiz ucreti \t%.2f $\n",faiz_ucreti);
				printf("faiz ucreti eklendikten sonra toplam para: \t%.2f $\n\n",anapara+faiz_ucreti);
			}
			else
			{
				break;
			}
					
	}
	
}
