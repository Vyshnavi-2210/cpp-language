//stack using arrays
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int);
void pop();
void peek();
void display();
int stack[MAX],top=-1;
void push(int data)
{
	if(top==MAX-1)
	{
		printf("stack is overflow");
	}
	else
	{
		top++;
		stack[top]=data;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		printf("%d is removed",stack[top]);
		top--;
	}
}
void peak()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("top element is %d",stack[top]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		printf("stack elements are:\n");
		for (i=top;i>=0;i--)
		{
			printf("stack[i]");
		}
	}
}
int main()
{
	int ch,data;
	do
	{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the data to push:");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
			    peek();
				break;
			case 4:
			    display();
				break;
			case 5:
			    exit(0);
			default:printf("Invalid choice\n");				
		}
	}while(ch!=5);
	
	return 0;
}
	
