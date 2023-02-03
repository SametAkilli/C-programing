#include <stdio.h>

#define MAX_DEGREE 100

void reversePolynomial(int degree, float coefficients[], float reversedCoefficients[])
{
    int i;
    for (i = 0; i <= degree; ++i)
    {
        reversedCoefficients[i] = coefficients[degree - i];
    }
}

int main()
{
    int degree, i;
    float coefficients[MAX_DEGREE + 1], reversedCoefficients[MAX_DEGREE + 1];
    
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    
    printf("Enter the coefficients of the polynomial:\n");
    for (i = 0; i <= degree; ++i)
    {
        printf("a[%d] = ", i);
        scanf("%f", &coefficients[i]);
    }
    
    reversePolynomial(degree, coefficients, reversedCoefficients);
    
    printf("Reversed polynomial:\n");
    for (i = 0; i <= degree; ++i)
    {
        printf("%.2f x^%d ", reversedCoefficients[i], i);
        if (i < degree)
        {
            printf("+ ");
        }
    }
    printf("\n");
    
    return 0;
}

