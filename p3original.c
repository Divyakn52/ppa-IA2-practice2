 #include<stdio.h>
int input_number()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;
}
int is_composite(int n)
{
  for(int i=2;i<n/2;i++)
  {
    if(n % i==0)
    return 1;
  } 
  return 0;
}
void output(int n,int is_composite)
{
  if(is_composite==1)
  {
   printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is not a composite number\n",n);
  }
}
int main()
{
  int num=input_number();
  int x=is_composite(num);
  output(num,x);
  return 0;
}