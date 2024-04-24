#include <stdio.h>
int f(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a*f(a,b-1);
    }
}

int main() {
    int a,b,mul;
    printf("enter base and power ");
    scanf("%d %d",&a,&b);
    mul=f(a,b);
    printf("the answer is %d",mul);

    return 0;
}
