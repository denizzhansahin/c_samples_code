#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    do{
        printf("break %d\n",i);
        i+=1;
        if(i==5){break;}

    }while(i<=10);

    printf("\n");
    int a = 0;
    while(a<=10)
    {

        a+=1;
        if(a==2){continue;}
        else{printf("continue %d\n",a);};
    };

    return 0;
}
