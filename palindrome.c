#include <stdio.h>
#include <math.h>
int reverse(int k) //to find mirror number. 
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
    int l=1,d=10,front,rear,k,pal,power;
    while(n>d)// to find the number of digits
    {
        l++;
        d=d*10;
    }
    power=pow(10,l/2);
    if((n/power)%10==9)  //rounding of if middle element is 9
        {
            n=((n/power)+1)*power;
        }
    if(l&1) //for odd number of digits
    {
        k=reverse(n/(power*10));
        pal=n-(n%power)+k;
        if(pal<n)
        {
            pal=pal+power;
        }
    }  
     else  //for even number of digits
     {
        k=reverse(n/power);
        pal=n-(n%power)+k;
        if(pal<n)
        {
            front=(pal/power)+1;
            rear=(pal%power)+(power/10);
            pal=(front*power)+rear;
        }
     }
    printf("%d",pal);
}
int main()
{
    int n;
    scanf("%d",&n);
    palindrome(n+1);
}
