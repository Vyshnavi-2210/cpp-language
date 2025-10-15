//Increment operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	b=a++;
	printf("a=%d,b=%d",&a,&b);
	printf("a=%d\n",++a);
	printf("a=%d\n",a++);
	printf("a=%d\n",a);
	return 0;
	
}
