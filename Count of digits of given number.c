
#include <stdio.h>

int main()
{
   int i,n,count=0;
   printf("enter a number");
   scanf("%d",&n);
  if(n==0)
  {
      count=1;
      
  }
  while(n!=0)
  {
      n=n/10;
      count++;
  }
  printf("count is %d",count);
    return 0;
}

