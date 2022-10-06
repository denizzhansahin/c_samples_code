#include <stdio.h>

int main(){
	
	int dizi[7] = {24,16,23,159,22,2,18};
	for(int i=0;i<8;i++){
			printf("dizinin %d. elemani: \t%d\n", i,dizi[i]);
	}
	int enbuyuk = dizi[0];
	for(int a =0;a<8;a++){
		if(enbuyuk<=dizi[a]){
			enbuyuk = dizi[a];
		}
	}
	printf("en buyuk deger: %d\n",enbuyuk);
	int enkucuk = dizi[0];
	for(int b=0;b<8;b++){
		if(enkucuk>=dizi[b]){
			enkucuk = dizi[b];
		}
	}
	printf("en kucuk deger: %d\n",enkucuk);

}
