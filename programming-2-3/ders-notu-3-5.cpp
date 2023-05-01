#include <stdio.h>
#include <locale.h>
int main( ) {
/* Aktif yerel ayarlar */
printf("%s\n", setlocale(LC_ALL, NULL));
printf("%.2f\n", 1275.46);
/* Yerel ayarlarý Türkçe'ye çevirme */
printf("%s\n", setlocale(LC_ALL, "Turkish"));
printf("%.2f\n", 1275.46);
/* Yerel ayarlarý Ýngilizce'ye çevirme */
printf("%s\n", setlocale(LC_ALL, "English"));
printf("%.2f", 1275.46);
return 0;
}
