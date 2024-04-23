#include <stdio.h>

int main()
{
    int n,row,space,star;
    printf("Enter the number");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=0;space<=row-1;space++)
       printf(" ");
        for(star=1;star<=n-(2*row-2);star++)
        {
            printf("*");
        }
       
        printf("\n");
    }

    return 0;
}
