#include <stdio.h>

int main(){
	int taban = 1;
	int tavan = 6;
	int toplam = 0;
	for(int a = taban;a<tavan;a++){
		if(a%2==0){
			toplam +=a;
		}
	}
	printf("toplam\t%d",toplam);
}
