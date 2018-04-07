#include <stdio.h>
#include <math.h>
int reverse(int k)
{
    int p=0;
    while(k>0)
    {
        p=(p*10)+(k%10);
        k=k/10;
    }
    return p;
}
int palindrome(int n)
{
    int l=1,d=10,fr,k,pal,power;
    //to find the number of digits
    while(n>d)
    {
        l++;
        d=d*10;
    }
    power=pow(10,l/2);
   if(l&1)
    {
        if((n/power)%10==9)
        {
            n=((n/power)+1)*power;
        }
        fr=d/power;
        k=reverse(n/fr);
        pal=n-(n%(fr/10))+k;
        if(pal<n)
        {
            pal=pal+(fr/10);
        }
        printf("%d",pal);
    }    
}
int main()
{
    int n;
    scanf("%d",&n);
    palindrome(n);
}
