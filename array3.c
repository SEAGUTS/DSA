#include <stdio.h>
void main()
{
	int n,i=0,j,b;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			continue;
		}
		printf("%d ",a[i]);
	}
}
