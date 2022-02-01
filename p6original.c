#include<stdio.h>

int input_n()
{
  int n;
  printf("To Find Sum Of 'n' Numbers\n");
  printf("Enter Value Of n\n");
  scanf("%d",&n);
  return n;
}

int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  {
    sum = sum + i;
  }
  return sum;
}

void output( int n ,int sum)
{
  printf("The sum of frist %d numbers is \n ",n);
  int i;
  for(i=0;i<n;i++)
  printf("%d+\t",i);
  printf("%d\t",n);
  printf("= %d\n",sum);

}

int main()
{
  int n,i,sum;
  n = input_n();
  sum = sum_n(n);
  output (n,sum);
  return 0; 
}
