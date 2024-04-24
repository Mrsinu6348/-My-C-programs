#include <stdio.h>
int f(int n){int count;
    
    if(n<=9){
        
        return 1;
        
    }
    else{
        count=1+f(n/10);
        return count;
    }
}

int main() {
    int n,count;
    printf("enter a number");
    scanf("%d",&n);
    
   count=f(n);
   printf("count is %d",count);

    return 0;
}
