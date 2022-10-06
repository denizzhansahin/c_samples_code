#include <stdio.h>

int main (){
	int kenar;
	printf("kenar sayisi yaz \t");
	scanf("\t\t%d",&kenar);
	for(int i=0;i<kenar;i++){
		for(int k=0;k<kenar;k++){
			printf("*");
		}
		printf("\n");
	}
	
	
}
