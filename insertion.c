#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],j,temp,n;
	printf("enter the size: ");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements before sorting: \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
	while(j>=0 && temp<a[j])
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
}
printf("elements after sorting:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
