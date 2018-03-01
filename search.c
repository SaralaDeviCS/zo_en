
#include <stdio.h>
int main()
{
	int n;
	int a[10000];
	printf("enter the number to be searched  ");
	scanf("%d",&n);
	int num,i=0,pos=-1;
	char end;
	while(scanf("%d%c",&a[i],&end))
	{
		if(a[i]==n)
		{
			pos=i;
		}
		i++;
		if(end=='\n')
		{
			break;
		}
	}
	if(pos==-1)
	{
		printf("the number is not found \n");
		
	}
	else
	{
	printf("%d is found in %d position",n,pos+1);
	}
}
