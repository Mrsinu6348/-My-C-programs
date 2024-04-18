#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    if(n%9==0)
    {
        printf("single digit sum is 9");
    }
     else
     printf("single digit sum is %d",n%9);
    return 0;
}
