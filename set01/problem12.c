#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("For complex number %d:\n", i + 1);
        c[i] = input_complex(); 
    }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++)
    {
        sum = add(sum, c[i]); 
    }
    return sum;
}
void output(int n, Complex c[n], Complex result)
{
    printf("The sum of these complex numbers is: %.1f + %.1fi\n", result.real, result.imaginary);
}
int main()
{
    int n;
    Complex result;
    n = get_n(); 
    Complex c[n]; 
    input_n_complex(n, c); 
    result = add_n_complex(n, c);
    output(n, c, result); 
    return 0;
}