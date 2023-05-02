#include <stdio.h>
#include <string.h>

int main()
{
	const char *s1 = "Mutlu Yeni Yillar";
	const char *s2 = "Mutlu Yeni Yillar";
	const char *s3 = "Mutlu Tatiller";
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n","s1 = ",s1,"s2 = ",s2,"strcmp(s1,s2) = ",strcmp(s1,s2),"strmcp(s1,s3) = ",strcmp(s1,s3),"strcmp(s3,s1) = ",strcmp(s3,s1));
	printf("%s%2d\n%s%2d\n%s%2d\n","strcmp(s1,s3,6) = ",strncmp(s1,s3,6),"strncmp(s1,s3,7) = ",strncmp(s1,s3,7),"strncmp(s3,s1,7) = ",strncmp(s3,s1,7));
	return 0;
}
