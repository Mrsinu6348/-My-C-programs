#include <stdio.h>

int main()
{
    int n,sum,prod,count=0,a,b,i,last;
    printf("enter the number");
    scanf("%d",&n);
    b=a=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    sum=0;
    while(a!=0)
    {
        last=a%10;
        a=a/10;
        prod=1;
        for(i=1;i<=count;i++)
        prod=prod*last;
        sum=sum+prod;
    }
    if(sum==b)
    printf("number is armstrong");
    else
    printf("number is not armstrong");

    return 0;
}
