#include <stdio.h>

int main()
{
    int i,n,prod,a,b;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    for(n=a;n<=b;n++)
       {
        prod=1;
        for(i=1;i<=n;i++)
        prod=prod*i;
        printf("factorial of %d is %d\n",n,prod);
        }

    return 0;
}
