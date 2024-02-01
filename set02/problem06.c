#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[100]; 
  char reverse_a[100]; 
  input_string(a); 
  str_reverse(a, reverse_a); 
  output(a, reverse_a);
  return 0;
}
void input_string(char *a)
{
    printf("Enter a string: ");
  scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
    int len = strlen(str); 
  int j = 0; 
  for (int i = len - 1; i >= 0; i--) { 
    rev_str[j] = str[i]; 
    j++; 
  }
  rev_str[j] = '\0';
}
void output(char *a, char *reverse_a)
{
    printf("The original string is: %s\n", a);
  printf("The reversed string is: %s\n", reverse_a);
}