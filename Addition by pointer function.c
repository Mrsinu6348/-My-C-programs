#include <stdio.h>
int add(int,int);
void main()
{
    int(*p)(int,int);
    int result;
    p=add;
    result=(*p)(10,20);
    printf("%d",result);

    return ;
}
int add(int a,int b)
{
    return a+b;
}
