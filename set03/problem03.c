#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int input_number() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}


int is_prime(int n) 
{
    if (n <= 1) return 0; 
    if (n <= 3) return 1; 

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0)
        return 0;
    }
    return 1;
}
void output(int n, int result) 
{
    if (result)
    printf("%d is a prime number.\n", n);
    else
    printf("%d is not a prime number.\n", n);
}

int main() 
{
    int n = input_number();
    int result = is_prime(n);
    output(n, result);
    return 0;
}
