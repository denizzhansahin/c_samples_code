#include <stdio.h>

int main()
{
	int c = 2;
	int x = 945;
	int u;
	int sayac = 0;
	int carpan;
	while(1){
		if(x>1){
			if(x%c==0){
				printf("%d, bir carpandir\n",c);
				while(x%c==0)
				{
					u++;
					x = x/c;
				}
			}
			else{
				c++;
			}
		}
		else{
			break;
		}
	}
}
