#include<stdio.h>
#include<math.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n, result;
  n = input_number();
  result = is_composite(n);
  output(n, result);
  return 0;
}
int input_number()
{
    int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}
int is_composite(int n)
{
    int i, limit = sqrt(n);
  for (i = 2; i <= limit; i++) {
    if (n % i == 0) {
      return 1;
    }
}
return 0;
}
void output(int n, int result)
{
    printf("The number is %d\n", n);
  if (result) {
    printf("The number is composite\n");
  }
  else {  
    printf("The number is not composite\n");
  }
}