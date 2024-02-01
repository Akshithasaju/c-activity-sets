#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
  int a = input(); 
  int b = input();
  int gcd = find_gcd(a, b); 
  output(a, b, gcd); 
  return 0;
}
int input()
{
    int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}
int find_gcd(int a, int b)
{
    if (b == 0) {
    return a; 
  }
  else {
    return find_gcd(b, a % b); 
  }
}
void output(int a, int b, int gcd)
{
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}