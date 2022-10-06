#include <stdio.h>

int main()
{
	int deniz = 15;
	printf("ilk sayi %d\n",deniz);
	printf("burada son arttirma var, %d bu kod gosterildikten sonra bir artacak\n",deniz++);
	printf("son arttirilmis sayi %d\n\n",deniz);
	
	int deniz2 = 1555;
	printf("ilk sayi %d\n", deniz2);
	printf("burada on arttirma var, %d bu kod gosterilmeden once bir artti\n", ++deniz2);
	printf("on arttirilmis sayi %d\n\n",deniz2);
	
	int deniz3 = 1000;
	printf("ilk sayi %d\n",deniz3);
	printf("burada son azaltma var, %d bu kod gosterildikten sonra bir azaltilacak\n",deniz3--);
	printf("son azaltilmis sayi %d\n\n",deniz3);
	
	int deniz4 = 800;
	printf("ilk sayi %d\n",deniz4);
	printf("burada on azaltma var, %d bu kod gosterilmeden once  bir azaldi\n",--deniz4);
	printf("on azaltilmis sayi %d\n\n",deniz4);
}
