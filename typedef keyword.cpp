#include<stdio.h>
typedef int * ip;
int main()
{
	int a=10;
	ip p=&a;
	printf("%d\n",&p);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d\n",*p);
	return 0;
}
