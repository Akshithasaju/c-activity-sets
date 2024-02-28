#include <stdio.h>
#include <stdbool.h>

int input_array_size();
void init_array(int n, bool a[]);
void eratosthenes_sieve(int n, bool a[]);
void output(int n, bool a[]);

int main() {
    int n = input_array_size();
    bool prime[n + 1];
    init_array(n, prime);
    eratosthenes_sieve(n, prime);
    output(n, prime);
    return 0;
}

int input_array_size() 
{
    int n;
    printf("Enter the maximum number (n): ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, bool a[]) 
{
    for (int i = 2; i <= n; i++)
    {
        a[i] = true;
    }
}

void eratosthenes_sieve(int n, bool a[]) 
{
    for (int p = 2; p * p <= n; p++) 
    {
        if (a[p] == true) 
        {
            // Mark all multiples of p as false
            for (int i = p * p; i <= n; i += p) 
            {
                a[i] = false;
            }
        }
    }
}

void output(int n, bool a[]) 
{
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) 
    {
        if (a[i]) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
