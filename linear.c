#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k,a[10];
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements :");
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	printf("enter the element to search: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("element found at pos %d",i+1);
			break;
		}
		if(i==n)
		{
			printf("element not found");
		}
	}
}





