#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,k,n,l,h;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search key : ");
	scanf("%d",&k);
	int m;
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=l+h/2;
		if(a[m]==k)
		{
			printf("element found at pos %d",m+1);
			
		}
		else if(a[m]<k)
		{
			l=m+1;
		}
		else
		{
			h=m-1;
		}
//		if(l>h)
//		{
//			printf("element not found");
//			break;
//		}
//		if(l>h)
//		{
//		printf("element not found");	
//}
return 0;
	}
	}
