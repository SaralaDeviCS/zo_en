//program to print the number of one's in the given decimal value after converting it to binary.

#include <stdio.h>
int main()
{
	long int n;
	int remainder;
	printf("Enter the decimal number:   ");
	scanf("%ld",&n);
	long int bin=0;
	int count=0;
	while(n>0)
	{
		remainder=n%2;
		if(remainder==1)
		{
			count++;
		}
		bin=(bin*10)+remainder;
		n=n/2;
	}
	
	printf("The number of one's in the binary value %ld is %d. ",bin,count);
}
