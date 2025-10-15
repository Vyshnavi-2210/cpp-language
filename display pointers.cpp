//display pointers
#include<stdio.h>
int main(n)
{
	int a[10],n,*p,i;
	p=a;
	printf("enter no of elements:");
	scanf("d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	return 0;
}
