#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int prod(int a,int b)
{
    return a*b;
}

void main()
{
    int(*p)(int,int);
    p=add;
        printf("%d\n",(*p)(10,20));
    p=sub;
        printf("%d\n",(*p)(10,20));
    p=prod;
        printf("%d\n",(*p)(10,20));

    

    return ;
}
