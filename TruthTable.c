
#include <stdio.h>

int main()
{
    int n=pow(2,3),a=0,b=0,c=0,i;
    int count_b=1,count_a=1;
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d",a,b,c,a|(b|c));
        count_b++;
        count_a++;
        c=!c;
        if(count_b>pow(2,1))
        {
            b=!b;
            count_b=1;
        }
        if(count_a>pow(2,2))
        {
            a=!a;
            count_a=1;
        }
        printf("\n");
    }
    
}
