#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter b,h values\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
 *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("the area of the triangle is %f",area);
}
int main()
{
 int b,h,area;
 input(&b,&h);
 find_area(b,h,&area);
 output(b,h,area);
 return 0;
}