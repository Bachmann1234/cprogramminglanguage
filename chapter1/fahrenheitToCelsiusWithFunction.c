#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating point version */
int toCelsius(int fahr);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* Lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper)
    {
        celsius = toCelsius(fahr);
        printf("%10.0f %12.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int toCelsius(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}