#include <stdio.h>
int main() 
{
    float n,e;
    printf("Enter Fahrenheit temperature:");
    scanf("%f",&n);
    e=(n-32)*5/9;
    printf("Celsius temperature is: %f",e);
    return 0;
}
