#include <stdio.h>

int main()
{
	int b[] = {10,20,30,40};
	int *bPtr = b;
	int i,offset;
	
	printf("b dizisi asagidaki metodla yazilmistir.\n");
	printf("Dizi belirtecleri yontemi\n");
	for(i=0;i<4;i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
	
	printf("\nIsaretci/offset Yontemi \n");
	printf("Isaretci dizinin ismidir\n");
	for(offset = 0; offset<4; offset++)
	{
		printf("*(b+%d) = %d\n",offset,*(b+offset));
	}
	
	printf("\nIsaretci belirtec yontemi\n");
	for(i=0;i<4;i++)
	printf("bPtr[%d] = %d\n",i,bPtr[i]);
	
	printf("\nIsaretci/offset yontemi\n");
	for(offset=0;offset<4;offset++)
	printf("*(bPtr + %d) = %d\n",offset,*(bPtr+offset));
	
	return 0;
}
