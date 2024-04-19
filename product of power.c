#include <stdio.h>

int main()
{
    int a,b,prod=1,i;
    printf("enter the base number ");
    scanf("%d",&a);
    printf("enter the power number ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    prod=prod*a;
    printf("product of given number is %d",prod);

    return 0;
}
