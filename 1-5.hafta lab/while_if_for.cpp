#include <stdio.h>

int main()
{
	int s=0;
	while(s!=11)
	{
		printf("merhaba while\n");
		s++;
	}
	
	int f=0;
	while(1)
	{
		printf("merhaba while ve if\n");
		f++;
		if(f==10)
		break;
	}
	
	for(int i=0;i<10;i++)
	{
		printf("merhaba for\n");
	}
	for(int i=0;i<10;++i)
	{
		printf("merhaba for2\n");
	}
	for(int i=0;i<10;i+=1)
	{
		printf("merhaba for3\n");
	}
	for(int i=0;i<10;i=i+1)
	{
		printf("merhaba for4\n");
	}
	
	//f onceden tanimli
	for(f>9;f--;)
	{
		printf("-");
	}
	/*
	//f dogru ise calisir
	for(;f<9;)
	{
		printf("1");
	}*/
	/*
	//f yok ve sonsuz calisir cunku f dogrudur.
	for(;f++;)
	{
		printf("2");
	}
	*/
	
	/*
	//onlu artis vardir
	int j;
	int x=10;
	int y=100;
	for(j=x;j<=4*x*y;j+=y/x)
	{
		printf("x : %d",x);
		printf("\n y: %d\n",y);
		printf("j: %d\n",j);
	}
	*/
	/*
	//sonsuz, eger = cikarilirsa hic calismaz
	for(int i=1;i<=i*i;i++)
	{
		printf("8");
	}
	*/
	for(int i=7;i<100;i+=7)
	{
		printf("%d\n",i);
	}
	
	float aa= 133333.2;
	printf("%21.2f\n",aa);
	
	//sola yasla
	float ab=1234.1;
	printf("%-21.2f\n",ab);
	
	//a = 97 dir ascii standartýnda ve b ise
	printf("%c karekteri %d degerine sahiptir.\n",'a','a');
	printf("%c ve %c karekterinin toplami %d degerine sahiptir.\n",'a','b','a'+'b');
	
	int dd, aab, cc;
	dd = aab = cc = 1234;
	printf("%d \t %d \t %d \t \n",dd,aab,cc);
}
