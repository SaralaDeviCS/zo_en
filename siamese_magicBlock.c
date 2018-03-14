#include <stdio.h>
int magicBlock(int n)
{
	int a[n][n];
	int i,j,k,r,c;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	i=0;
	j=n/2;
	for(k=1;k<=n*n;k++)
	{
		a[i][j]=k;
		r=(i+n-1)%n;
		c=(j+n+1)%n;
		if(a[r][c]==0)
		{
			i=r;
			j=c;
		}
		else
		{
			i=(i+1+n)%n;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("enter the number  ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("!!it works only for odd number");
		return 0;
	}
	magicBlock(n);
}
