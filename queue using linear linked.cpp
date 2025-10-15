//queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front=NULL,*rear=NULL;
int size=0;
QUEUE *create();
void enque();
void deque();
void display();
QUEUE *create()
{
	QUEUE *newnode=(QUEUE*)malloc(sizeof(QUEUE));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	size++;
	return newnode;
}
void enque()
{
	QUEUE *newnode=create();
	if(front==NULL)
	{
		front = front = newnode;
	}
	else
	{
		rear=rear->next;
		rear = newnode;
	}
}
void deque()
{
	QUEUE *temp=front;
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		QUEUE *temp=create();
		front=rear=NULL;
	}
	else
	{
		front=front->next;
	}
	printf("%d is removed",temp->data);
	free(temp);
}
void display()
{
	QUEUE *t=front;
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		while(t!=rear)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.Enque\n2.Deque\n3.Display\n4.Count\n");
		printf("Enter operation:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enque();
					break;
			case 2:deque();
					break;
			case 3:display();
					break;
			case 4:printf("Number of elements are %d",size);
					break;
			default:printf("Invalid output");
		}
	}while(1);
	return 0;
}
