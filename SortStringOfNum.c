#include <stdio.h>
#include <string.h>
int main()
{
	char s[100][100];char temp[100];
	char neg[100][100],pos[100][100];
	int nos,i,j,n=0,p=0;
	scanf("%d",&nos);
	for(i=0;i<nos;i++)
	{
		scanf("%s",s[i]);
		if(s[i][0]=='-')
		{
			strcpy(neg[n],s[i]);
			n++;
		}
		else if(s[i][0]!='-')
		{
			strcpy(pos[p],s[i]);
			p++;
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((strlen(neg[i])<strlen(neg[j])))
			{
				strcpy(temp,neg[i]);
				strcpy(neg[i],neg[j]);
				strcpy(neg[j],temp);
			}
			else if(strlen(neg[i])==strlen(neg[j]))
			{
				if(strcmp(neg[i],neg[j])<0)
				{
					strcpy(temp,neg[i]);
					strcpy(neg[i],neg[j]);
					strcpy(neg[j],temp);
				}
			}
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=i+1;j<p;j++)
		{
			if((strlen(pos[i])>strlen(pos[j])))
			{
				strcpy(temp,pos[i]);
				strcpy(pos[i],pos[j]);
				strcpy(pos[j],temp);
			}
			else if(strlen(pos[i])==strlen(pos[j]))
			{
				if(strcmp(pos[i],pos[j])>0)
				{
					strcpy(temp,pos[i]);
					strcpy(pos[i],pos[j]);
					strcpy(pos[j],temp);
				}
			}
		}
	}
	i=0;j=0;
	while(i<n)
	{
		strcpy(s[i],neg[i]);
		i++;
	}
	while(j<p)
	{
		strcpy(s[i++],pos[j++]);
	}
	for(i=0;i<nos;i++)
	{
		printf("%s\n",s[i]);
	}
		
}
