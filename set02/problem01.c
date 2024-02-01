#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
  float base, height, area;
  input(&base, &height);
  find_area(base, height, &area);
  output(base, height, area);
  return 0;
}
void input(float *base, float *height)
{
    printf("Enter the base and height of the triangle: ");
  scanf("%f %f", base, height);
}
void find_area(float base , float height, float *area)
{
    *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
     printf("The area of the triangle is %.2f square units\n", area);
}