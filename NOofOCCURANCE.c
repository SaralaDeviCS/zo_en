#include <stdio.h>
int main()
{
	int a[100];
	printf("enter the number of elements");
	int n,m=1,k,i,j;
	scanf("%d",&n);
	int count[n][2];
	printf("enter the elements\n");
	scanf("%d",&a[0]);
	count[0][0]=a[0];
	count[0][1]=1;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		k=0;
		for(j=0;j<m;j++)
		{
			if(count[j][0]==a[i])
			{
				k=1;
				count[j][1]++;
			}
		}
		if(k==0)
		{
			count[m][0]=a[i];
			count[m][1]=1;
			m++;
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d --> %d\n",count[i][0],count[i][1]);
	}
}
