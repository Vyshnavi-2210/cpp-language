// pointer arthimetic operations
#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("Enter a and b values:");
	scanf("%d%d",p,q);
	printf("%d+%d=%d\n",*p,*q,*p + *q);
	printf("%d-%d=%d\n",*p,*q,*p - *q);
	printf("%d*%d=%d\n",*p,*q,*p * *q);
	printf("%d/%d=%d\n",*p,*q,*p / *q);
	printf("%d%%%d=%d\n",*p,*q,*p % *q);
	return 0;
}
