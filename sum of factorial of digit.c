#include <stdio.h>

int main()
{
    int n,i,sum,last,a,prod;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        prod=1;
        for(i=1;i<=last;i++)
        
            prod=prod*i;
            sum=sum+prod;
        
    }
printf("sum is %d",sum);
if(sum==a)
printf("number is strong");
else
printf("number is not strong");
    return 0;
}
