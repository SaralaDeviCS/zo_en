# include <stdio.h>
int main()
{
	int n,i,j,k;
	float rem,det=1;
	printf("enter the order of sqaure matrix");
	scanf("%d",&n);
	float a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			rem=a[i][j]/a[j][j];
			for(k=0;k<n;k++)
			{
				a[i][k]=a[i][k]-(rem*a[j][k]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		det=det*a[i][i];
	}
	printf("%f is the determinant value",det);
}
