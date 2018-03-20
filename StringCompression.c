#include <stdio.h>
#include <string.h>
char* compress(char s[1000])
{
	int l,i,j,k;
	char len;
	l=strlen(s);
	static char cmp[10000];
	i=0;
	j=0;
	while(i<l)
	{
		k=i;
		cmp[j]=s[i];
		len='1';
		while(s[k]==s[k+1])
		{
			len++;
			k++;
		}
		if(len>49)
		{
			cmp[j+1]=len;
			j++;
		}
		i=i+(int)len-48;
		j++;
	}
	cmp[j]='\0';
	return cmp;
}
		
	
int main()
{
	char s[1000];
	printf("Enter the string");
	scanf("%s",s);
	printf("The compressed string is....\n");
	printf("%s",compress(s));
}
