#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
  int n, a[n], sum;
  n = input_array_size();
  input_array(n, a);
  sum = sum_composite_numbers(n, a);
  output(sum);
  return 0;
}
int input_array_size()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (is_composite(a[i])) {
      sum += a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("The sum of composite numbers in the array is: %d\n", sum);
}