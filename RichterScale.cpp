#include <stdio.h>
#include <math.h>

float getMagnitude(float amplitude)
{
    return (float) (2.0 / 3.0) * log10(amplitude) - 6.0;
}

int main()
{
    float amplitude;
    printf("Enter the amplitude (in micrometers): ");
    scanf("%f", &amplitude);
    
    printf("Magnitude of the earthquake: %.2f\n", getMagnitude(amplitude));
    
    return 0;
}


