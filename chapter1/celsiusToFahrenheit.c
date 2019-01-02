#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating point version */
int main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* Lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    celsius = lower;
    printf("Celsius\tFahreheit\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%7.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}