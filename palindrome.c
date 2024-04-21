#include <stdio.h>

int main()
{   int n,i,reverse,last,a;

    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    reverse=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        reverse=reverse*10+last;
    }
    printf("reverse of %d is %d\n",a,reverse);
    if(reverse==a)
    printf("Number is palindrome");
    else
    printf("Number is not palindrome");
    
    

    return 0;
}
