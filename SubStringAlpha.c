#include <stdio.h>
#include <string.h>
int print(char *s,int start, int end)
{
	char set[1000];
	int k=0,i;
	for(i=start;i<end;i++)
	{
		set[k++]=s[i];
	}
	set[k]='\0';
	printf("%s",set);
}
int substring(char *s)
{
	int l=strlen(s),len=-1,i,j,k,m,start,end,p;
	char ch;
	for(i=0;i<l-1;i++)
	{
		k=0;
		ch=s[i];
		for(j=i+1;j<l&&s[j]!=ch&&s[j]>=s[j-1];j++)
		{
			k++;
		}
		if(k>len)
		{
			start=i;
			end=j;
			len=k;
		}
	}
	print(s,start,end);
}
int main()
{
char s[1000];
scanf("%s",s);
substring(s);
}
