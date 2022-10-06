#include <stdio.h>

int main(){
	
	int taban = 0;
	int tavan = 20;
	int tutulan = 8;
	
	int aralik = (taban+tavan)/2;
	printf("aralik : %d\n",aralik);
	
	while(aralik!=tutulan){

	if(aralik<=tutulan){
		printf("sayi, buyuk\n");
		aralik++;
	}
	if(aralik>=tutulan){
		printf("sayi, kucuk\n");
		aralik--;
	}
	}
	
		if(aralik==tutulan){
		printf("sayi bulundu, %d\n",tutulan);
		}

	
	
	
	
}
