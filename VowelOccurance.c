#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int search(char s[1000],char m)
{
    int count=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(tolower(s[i])==m)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char s[1000];
    scanf("%[^\n]s",s);
    int j,ret;
    char vowel[5]={'a','e','i','o','u'};
    for(j=0;j<5;j++)
    {
        ret=search(s,vowel[j]);
        if(ret>0)
        {
            printf(" %c ---> %d ",vowel[j],ret);
        }
    }
    
}


