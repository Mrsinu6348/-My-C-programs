#include <stdio.h>

int main() {

  int values[9],x=0;

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 9; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 9; ++i) {
     printf("%d\n", values[i]);
  }
  for(int i=0;i<9;i++)
     x=x^values[i];
     printf("the element is %d",x);
  return 0;
}
