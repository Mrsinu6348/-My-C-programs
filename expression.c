#include <stdio.h>

int main()
{
    int i,a,b,sum,prod,y,z,u;
    printf("enter base");
    scanf("%d",&a);
        printf("enter power");
        scanf("%d",&b);
    sum=0.0;
    prod=1;
    for(u=0;u<b;i++)
    {
        y=prod*a;
        for(i=1;i<=a;i++)
        z=prod*i;
        sum=sum+y/z;
        
    }
    printf("sum of the exp=%d",sum);

    

    return 0;
}
