#include <stdio.h>
void f(int n);

void main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    f(n);
    
}
void f(int n)
{
    if(n==1||n==0)
    {printf("%d",n);
    return;}
    else
    f(n/2);
    printf("%d",n%2);


}
