#include <stdio.h>
void swap(int,int);

int main()
{
    int a=10,b=20;
    printf("before swap");
    printf("a=%d,b=%d",a,b);
    swap(a,b);
    //printf("a=%d,b=%d",a,b);

    return 0;
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("a=%d,b=%d",x,y);
    
}
