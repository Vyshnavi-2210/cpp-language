//ASSIGNMENT OPERATIONS
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b values:");
	scanf("%d%d",&a,&b);
	a+=b;
	printf("a+b -> a=%d b=%d\n",a,b);
	a-=b;
	printf("a-=b -> a=%d b=%d\n",a,b);
	a*=b;
	printf("a*=b -> a=%d b=%d\n",a,b);
	a/=b;
	printf("a/=b -> a=%d b=%d\n",a,b);
	a%=b;
	printf("a%=b -> a=%d b=%d\n",a,b);
	return 0;
}
