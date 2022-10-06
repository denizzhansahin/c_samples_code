#include <stdio.h>

int main(){
	int sayi = 72;
	int sayi2 = 36;
	int sinir = 0;
	if(sayi>=sayi2){
		sinir = sayi2;
	}else{
		sinir = sayi;
	}
	int liste[sayi-1] = {};

	for(int a = 0;a<sinir;a++){
		
		int deniz = a+1;
		if(sayi%deniz==0 and sayi2%deniz==0){
			liste[deniz-1] = deniz;
			printf("%d sayisi ile %d sayisi %d sayisina bolundu\n",sayi,sayi2,deniz);
		}
	}
	for(int b = 0;b<sinir;b++){
		int deger = liste[b];
		printf("liste %d. elememan : %d\n",b,deger);
	}
	int max = liste[0];
	for(int i = 0; i<sinir;i++){
		if(max<=liste[i]){
			max = liste[i];
		}
	}
	printf("en buyuk ortak bolen : %d\n",max);
	
}
