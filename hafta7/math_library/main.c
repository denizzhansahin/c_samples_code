#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("MATEMATİK KUTUPHANESI ISLEMLERI\n");
    printf("Karekok : %.2f\n",sqrt(900.0));
    printf("Ustel fonksiyon : %.2f\n",exp(1.0));
    printf("Logoritma fonksiyon : %.2f\n",log(2.718252));
    printf("Logoritma 10 tabanında fonksiyon : %.2f\n",log(7.389056));
    printf("Mutlak -1 fonksiyon : %.2f\n",fabs(-1.0));
    printf("Mutlak 0 fonksiyon : %.2f\n",fabs(0.0));
    printf("Mutlak 1 fonksiyon : %.2f\n",fabs(1.0));
    printf("Kendinden buyuk 9.2 ilk tamsayiya yuvarla : %f\n",ceil(9.2));
    printf("Kendinden buyuk -9.8 ilk tamsayiya yuvarla : %f\n",ceil(-9.8));
    printf("Kendinden kucuk 9.2 ilk tamsayiya yuvarla : %f\n",floor(9.2));
    printf("Kendinden kucuk -9.8 ilk tamsayiya yuvarla : %f\n",floor(-9.8));
    printf("3'un 2 kuvveti : %f\n",pow(3,2));
    printf("4745/4353 kalani : %f\n",ceil(47454353));
    printf("Sinus 5 : %f\n",sin(5.0));
    printf("Cos 5 : %f\n",cos(5.0));
    printf("Tan 5 : %f\n",tan(5.0));
}
