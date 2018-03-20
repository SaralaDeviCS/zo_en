#include <stdio.h>

int convert(int dec,int bas)
{
	int result=0,remainder,i=1;;
	while(dec>0)
	{
		remainder=dec%bas;
		result=result+(remainder*i);
		i=i*10;
		dec=dec/bas;
	}
	return result;
}


int main()
{
	int deci,base;
	printf("enter the decimal value ");
	scanf("%d",&deci);
	printf("Enter the base value  ");
	scanf("%d",&base);
	printf("The converted value is   : %d",convert(deci,base));
}
	
