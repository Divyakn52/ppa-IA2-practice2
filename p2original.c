#include<stdio.h>
int input_side()
{
  int x;
  printf("enter value of three sides of triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
 if(a==b&&b==c)
 {
   printf("all sides are equal\n");
 }
 else if(a!=b && b!=c && c!=a)
 {
   return 1;
 }
 return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("triangle of side %d ,%d and %d is saclene",a,b,c);
  }
  else
  {
    printf("triangle of side %d ,%d and %d is not scalene\n",a,b,c)
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}