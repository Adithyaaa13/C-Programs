#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int e)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=e;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==NULL)
{
	printf("empty");
}
else
{
	printf("popped element is %d:",top->data);
	top=top->next;
}
}
void display()
{
		struct node *temp;
		temp=top;
		if(top==NULL)
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
		push(e);
		break;
		case 2: pop();
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

