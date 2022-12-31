#include <stdio.h>
#include <stdlib.h>
void myFunction();
void myFunction2(){printf("I just got executed!\n");};

int main()
{
    myFunction();
    myFunction2();



}

void myFunction(){printf("I just got executed!\n");};
