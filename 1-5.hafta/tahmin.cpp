#include <stdio.h>

int main(){
	int taban= 5;
	int tavan = 10;
	int soylenen = taban;
	int tutulan = 2;
	
	while(tutulan!=soylenen){
		
		if(soylenen<=tutulan){
			printf("soylenen sayi, tutulan sayidan kucuk\n");
			printf("------------\n");
			soylenen++;
		}
		if(soylenen>tutulan){
			printf("soylenen sayi, tutulan sayidan buyuk\n");
			printf("------------\n");
			soylenen--;
		}
		
	}

		if(soylenen==tutulan){
			printf("sayi bulundu\t%d\n",soylenen);
			printf("------------");
			
		}
		
	

	
	
	
}
