#include <stdio.h>
#include <math.h>
int main()
{
    int number, originalNumber, digits=0,remainder, result = 0,mul=1;
    printf("Enter an n digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        originalNumber=originalNumber/10;
        digits++;
    }
    originalNumber=number;
    while (originalNumber > 0)
    {
        remainder = originalNumber%10;
        mul=pow(remainder,digits);
        result+=mul;
        originalNumber /= 10;
        mul=1;
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}
