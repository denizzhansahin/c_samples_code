#include <stdio.h>

int main(){
	
	int sayi = 5;
	float toplam = 0;
	float e = 0;
	for(int sayici = 1;sayici<sayi+1;sayici++){
		if(toplam==0){
			toplam = sayici*sayici;
			e+=sayici;
		}
		if(toplam!=0){
			toplam = toplam*sayici;
			e+= 1/toplam;
		}
		
	}
	printf("sonuc : \t%d",toplam);
	printf("\n e sayisi : %f",e);
	
	
}
