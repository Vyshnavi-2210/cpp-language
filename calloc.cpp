#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr=(int*)calloc(n, sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not allocated");
		exit(0);
	}
	else
	{
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	printf("array elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(ptr+i));
    exit(0);
    }
}
