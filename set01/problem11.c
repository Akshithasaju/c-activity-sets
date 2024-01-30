#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
    Complex c;
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("The first complex number is: %.1f + %.1fi\n", a.real, a.imaginary);
    printf("The second complex number is: %.1f + %.1fi\n", b.real, b.imaginary);
    printf("The sum of these complex numbers is: %.1f + %.1fi\n", sum.real, sum.imaginary);
}
int main()
{
    Complex a, b, sum;
    printf("For the first complex number:\n");
    a = input_complex(); 
    printf("For the second complex number:\n");
    b = input_complex();
    sum = add_complex(a, b); 
    output(a, b, sum); 
    return 0;
}