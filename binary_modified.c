#include <stdio.h>
int main()
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	int count=0;
	int n=num;
	while(n>0)
	{
		count=count+(n&1);
		n=n >> 1;
	}
	
	printf("there are %d number of one's",count);
}
