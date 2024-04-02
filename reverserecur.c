#include<stdio.h>
#include<conio.h>

void disp(int a[],int n)
{
	if(n<0)
	{
		return;
	}
	printf("%d",a[n]);
	disp(a,--n);
}
int main(){
	int a[10],n,i;
	printf("enter the size: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("array elements are:  ");
	disp(a,n-1);
	
}
