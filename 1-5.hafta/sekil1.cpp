#include <stdio.h>

int main(){
	int sayi = 12;
	int sayi1 = 1;
	for(int i = 0; i< sayi; i++){
		for(int a = 0; a<sayi;a++){
			for(int b = 0; b<sayi1; b++){
				printf("*");
			}
			sayi1++;
			printf("\n");
		}
	}
	
	
	
}
