#include<stdio.h>
#include<conio.h>

#define max 10
int main()
{
	int pol[100],i,d;
	printf("enter the degree of polynomial: ");
	scanf("%d",&d);
	if(d<1 ||d>max)
	{
		printf("the degree should be at least 1");
	}
	else
	
	{
		printf("enter the coefficient of polynomial");
		for(i=d;i>=0;i--)
		{
			scanf("%d",&pol[i]);
			
		}
		printf("the polynomial is: ");
		for(i=d;i>=0;i--)
		{
			if(pol[i]!=0)
			{
				if(i==d)
				{
					printf(" %dx^%d",pol[i],i);
				}
				else if(i==1)
				{
					printf("+%dx",pol[i]);
				}
				else if(i==0)
				{
				printf("+%d",pol[i]);	
				}
				else
				{
					printf(" +%dx^%d",pol[i],i);
				}
				
			}
		}
	}
}

