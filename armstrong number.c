#include <stdio.h>

int main()
{
    int n,sum=0,last,a;
    printf("enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
       last=n%10;
       n=n/10;
       sum=sum+(last*last*last);
       
    }
    if(sum==a)
    printf("number is armstrong");
    else
    printf("number is not armstrong");

    return 0;
}
