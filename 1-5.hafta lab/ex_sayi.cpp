#include <stdio.h>
#include <math.h>

int main(){
	
	int sayi = 3;
	float toplam = 0;
	float ex = 0;
	float uslu = 0;
	int x = 1;
	for(int sayici = 1;sayici<sayi+1;sayici++){
		if(toplam==0){
			toplam = sayici*sayici;
			ex+=sayici;
		}
		if(toplam!=0){
			toplam = toplam*sayici;
			uslu = pow(x,sayici);
			ex+= uslu/toplam;
			x++;
		}
		
	}
	printf("sonuc : \t%d",toplam);
	printf("\n ex sayisi : %f",ex);
	
	
}
