# include <stdio.h>
int main()
{

	int n,i,j,k,t;

	float rem,det=1,zero=2;

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
	for(i=0;i<n;i++)
	{
		if(a[i][i]==0)
		{
			zero=0;
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=0)    //confirms that the entire row is not zero
				{
					for(t=0;t<n;t++)
					{
						if(a[t][i]!=0)           //confirms that the entire coloumn is not zero
						{
						zero=1;
						break;
						}
					}
					for(k=0;k<n;k++)
					{
						a[k][i]=a[k][i]+a[k][j];
					}
					
					break;
				}
			}
			if(zero==0)     // if entire row or coloumn is zero determinant value is 0
			{
				det=0;
			}
		}
	}

	if(det!=0)
	{
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
	}
	printf("%f is the determinant value",det);

}
