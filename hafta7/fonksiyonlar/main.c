#include <stdio.h>
#include <stdlib.h>

int carpim(int,int);
int main()
{

    int a=2,b=3,c=0,d=0;

    int carpma(int x,int y)
    {c=x*y;}
    c = carpma(a,b);
    printf("%d\n",c);


    d = carpim2(5,6);
    printf("%d\n",d);

    carpim4(7,8);


    /*
    //deger donmez
    void carpma2(int x,int y)
    {c=x*y;}
    c = carpma2(a,b);
    printf("%d\n",c);

    d = carpim3(3,4);
    printf("%d\n",d);
    */



    return 0;
}

int carpim(int v,int n)
{int d; d=v*n;}


int carpim2(int v,int n)
{int d; d=v*n; return d;}

void carpim3(int v,int n)
{int d; d=v*n;}

void carpim4(int v,int n)
{int d; d=v*n; printf("%d",d);}
