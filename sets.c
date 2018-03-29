#include <stdio.h>
#include <math.h>
int print(int *set,int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%d\t",set[i]);
	}
	printf("\n");
}
int sets(int a[100],int n)
{
	int c=pow(2,n);
	int i,j,k,set[n];
	for(i=1;i<c;i++)
    	{
		k=0;
		for(j=0;j<n;j++)
       		 {
			if(i&1<<j)
			{
				set[k]=a[j];
				k++;
			}
       		 }
		print(set,k);
	}
}
int main()
{
	int n,i,a[100];
  	printf("enter the number of elements");
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
        	scanf("%d",&a[i]);
   	}
   	sets(a,n);
}
