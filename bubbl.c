#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,t;
	printf("eter the size of array: ");
	scanf("%d",&n);
	printf("enter the elements of arrau : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elemnets before sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
		
	}
	printf("elemnets after sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	

}
