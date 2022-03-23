#include<stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int Gcd(int a,int b)
{
  int gcd, i;
  for(i=1;i<=a && i<=b;++i)
  {
    if(a%i==0 && b%i==0)
    {   
     gcd=i;
    }  
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("the GCD of %d %d is %d",a,b,gcd);
}
int main()
{
  int x,y,gcd;
  x=input();
  y=input();
  gcd=Gcd(x,y);
  output(x,y,gcd);
  return 0;
}