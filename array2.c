#include <stdio.h>
int removenum(int a[],int n)
{
	if(n==0)
	return 0;
	int i=0,j;
	for(j=1;j<n;j++)
	{
		if(a[i]!=a[j])
		{
			i++;
			a[i]=a[j];
		}
	}
	return i+1;
}
void main()
{
	int n,i=0,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[i])
			{
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	j=removenum(a,n);
	for(i=0;i<j;i++)
	{
		printf("%d ",a[i]);
	}
}
