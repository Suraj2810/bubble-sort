#include<stdio.h>
void bubble(int a[],int n);
int main()
{
	int a[100];
	int i,n;
	printf("\n enter how many array you want to..\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\n enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	bubble(a,n);
	for(i=0;i<=n;i++)
	printf("\n %d",a[i]);
	}
	void bubble(int a[],int n)
	{
		int i, r,t;
		for(r=1;r<=n;r++)
		for(i=0;i<=n-r;i++)
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			
		}
	}
