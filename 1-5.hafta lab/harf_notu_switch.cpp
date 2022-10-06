#include <stdio.h>

int main()
{
	int nott;
	int aSay = 0, bSay, cSay, dSay=0, fSay=0;
	printf("harf notlarini girin.\n");
	printf("cikis icin eof karekteri girin\n");
	
	while((nott=getchar())!=EOF)
	{
		switch(nott)
		{
			case 'A': case 'a': ++aSay; break;
			case 'B': case 'b': ++bSay; break;
			case 'C': case 'c': ++cSay; break;
			case 'D': case 'd': ++dSay; break;
			case 'F': case 'f': ++fSay; break;
			case '\n': case ' ': break;
			
			default: printf("yanlis harf notu girildi. Yeni bir harf notu girin.\n");
		}
	}
	printf("\n her harf notu icin toplam:\n");
	printf("A: %d\n",aSay);
	printf("B: %d\n",bSay);
	printf("C: %d\n",cSay);
	printf("D: %d\n", dSay);
	printf("F: %d\n",fSay);
}
