
#include <stdio.h>

int main()
{
   int i,n;
   printf("enter a number");
   scanf("%d",&n);
  
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           printf("%d is not prime number",n);
           break;
       }
   }
if(i==n)
printf("%d is prime",n);
    return 0;
}

