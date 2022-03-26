#include<stdio.h>
int input_side()
{
  int n;
  printf("Enter the value of side\n");
  scanf("%d",&n);
  return n;
}

int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene)
    printf("The triangle with side %d ,%d and %d is scalene\n",a,b,c);
  else
     printf("The triangle with side %d ,%d and %d is  not scalene\n",a,b,c);
}

int main()
{
  int AB=input_side();
  int BC=input_side();
  int AC=input_side();
  int res= check_scalene(AB,BC,AC);
  output(AB,BC,AC,res);
  return 0;
  
}