#include <stdio.h>

int main(){
	
	printf("Iki adet sayi yaziniz\n--------\n");
	int sayi = 0;
	int sayi1 = 0;
	printf("Ilk sayiyi yaziniz \t");	scanf("%d",&sayi);
	printf("\n");
	printf("Ikinci sayiyi yaziniz \t"); scanf("%d",&sayi1);
	printf("\n---------\n");
	int enbuyuk = 0;
	int kontrol = 0;
	printf("Sayilar: \t1. sayi %d \t 2.sayi %d\n",sayi,sayi1);
	printf("-----------\n");
	if(sayi>sayi1){
		enbuyuk = sayi;
		printf("Ilk sayi buyuktur\n");
		if(sayi%sayi1 == 0){
			printf("En kucuk ortak kat : \t%d",enbuyuk);
		}
		else{
			kontrol++;
			//printf("%d\n",kontrol);
		}
	}
	if(sayi1>sayi){
		enbuyuk = sayi1;
		printf("Ikinci sayi buyuktur\n");
		if(sayi1%sayi==0){
			printf("En kucuk ortak kat : \t%d\n",enbuyuk);
		}
		else{
			kontrol++;
			//printf("%d\n",kontrol);
		}
	}

	printf("----------\n");
	if(kontrol == 1){
		//printf("kontrol");
		int ekok = 0;
		int sonuc = 0;
		while(1){
			ekok++;
			if((ekok % sayi == 0) && (ekok % sayi1 == 0)) {
				sonuc = ekok; break;
			}
		}
		printf("%d ve %d'nin en kucuk ortak kati : %d\n",sayi,sayi1,ekok);
	}
	
          }
