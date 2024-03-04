#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int compareFractions(Fraction f1, Fraction f2) 
{
    return f1.num * f2.den - f2.num * f1.den;
}

Fraction findSmallestFraction(Fraction f1, Fraction f2, Fraction f3) 
{
    if (compareFractions(f1, f2) <= 0 && compareFractions(f1, f3) <= 0) {
        return f1;
    } else if (compareFractions(f2, f3) <= 0) {
        return f2;
    } else {
        return f3;
    }
}

int main() {
    Fraction f1, f2, f3;
    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &f1.num, &f1.den);

    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &f2.num, &f2.den);

    printf("Enter the third fraction (numerator denominator): ");
    scanf("%d %d", &f3.num, &f3.den);

    
    Fraction smallestFraction = findSmallestFraction(f1, f2, f3);

    
    printf("The smallest fraction is: %d/%d\n", smallestFraction.num, smallestFraction.den);

    return 0;
}
