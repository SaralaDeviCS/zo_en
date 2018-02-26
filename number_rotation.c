//to left rotate the given number by the given number of times.

#include <stdio.h>
int main()
{
	int num,count;
	printf("enter the number :  ");
	scanf("%d",&num);
	printf("\n");
	printf("enter the times to be rotated : ");
	scanf("%d",&count);
	int k=1,rem,i;
	while(k<num/10)
	{
		k=k*10;
	}
	int n=num;
	for(i=1;i<=count;i++)
	{
		rem=n%k;
		n=(rem*10)+(n/k);
	}
	printf("The number after rotation is %d",n);
}
