#include <stdio.h>

int main(){
	
	int sayi = 5;
	int toplam = 0;
	for(int sayici = 1;sayici<sayi+1;sayici++){
		if(toplam==0){
			toplam = sayici*sayici;
		}
		if(toplam!=0){
			toplam = toplam*sayici;
		}
		
	}
	printf("sonuc : \t%d",toplam);
	
	
}
