#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int e)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=e;
	newnode->next=0;
	if(front==0&&rear==0)
	{
		front=rear=newnode;
	}
		else
		{
			rear->next=newnode;
			rear=newnode;
		}
		
	}
void dequeue()
{
	if(front==0&&rear==0)
{
	printf("empty");
}
else
{
	printf("popped element is %d:",front->data);
	front=front->next;
}
}
void display()
{
		struct node *temp;
		temp=front;
		if(front==NULL)
{
	printf("empty");
}
else
{
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
}
int menu()
{
	int ch;
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	printf("enter your choice");
	scanf("%d",&ch);
	return ch;
}
int process()
{
	int ch,e;
	for(ch=menu();ch!=4;ch=menu())
	{
	switch(ch)
	{
		case 1:printf("eter the element to insert: ");
		scanf("%d",&e);
		enqueue(e);
		break;
		case 2: dequeue();
		break;
		case 3: display();
		break;
		case 4: exit(0);
		break;
		default: printf("incorrect option");
		break;		
	}
}
}
int main()
{
	process();
	return 0;
}

