#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a, b, c, isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}
int input_side()
{
    int side;
  printf("Enter a side of the triangle: ");
  scanf("%d", &side);
  return side;
}
int check_scalene(int a, int b, int c)
{
    if (a != b && b != c && c != a) {
    return 1;
  }
  else 
  {
    return 0;
  }
}
void output(int a, int b, int c, int isscalene)
{
    printf("The sides of the triangle are %d, %d, and %d\n", a, b, c);
  if (isscalene) {
    printf("The triangle is scalene\n");
  }
  else {
    printf("The triangle is not scalene\n");
  }
}