#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the value of a number\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
 for(int i=2; i<n/2;i++)
  {
    if(n%i==0)
      return 1;
    }
      return 0;
    }
  

void output(int n, int composite)
{
  if(composite)
    printf("%d is composite\n",n);
  else
    printf("%d is not composite\n",n);
}

int main()
{
  int n= input_number();
  int res= is_composite(n);
  output(n,res);
  return n;
  
}