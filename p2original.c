#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int main()
{
  int num1,num2;
  float sum;
  num1 = input();
  num2 = input();
  sum= num1+num2;
  printf("addition of %d + %d is= %f\n",num1,num2,sum);
  return 0;
}