#include <stdio.h>
int sets(int a[100],int n)
{
    int l,i,j,k;
    for(l=0;l<n-1;l++)
    {
        i=0;
        for(k=0;k<n;k++)
        {
            int set[l];
            for(j=0;j<=l;j++)
            {
                set[j]=a[i];
                i=(i+1)%n;
            }
            for(j=0;j<=l;j++)
            {
                printf("%d\t",set[j]);
            }
            
            printf("\n");
        }
    }
    for(l=0;l<n;l++)
    {
        printf("%d\t",a[l]);
    }
}
int main()
{
    int n,i,a[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sets(a,n);
}
