#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i;
	printf("Number of arguments:%d\n",argc);
	for(i=0;i<argc;i++)
	{
		printf("Argument %d=%s",i+1,argv[i]);
	}
	return 0;
}
