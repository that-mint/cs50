#include <stdio.h>
#include <math.h>

int main()
{
    long int l=0;
    printf("\nNumber: ");
    scanf("%ld", &l);

    int i = 0;
    long no = l;
    while (no > 0)
    {
        no = no / 10;
        i++;
    }

    if (i != 13 && i != 15 && i != 16)
    {
        printf("Invalid Number\n");
    }

    int sum1 = 0;
    int sum2 = 0;
    long x = l;

    do
    {
        int mod1 = x % 10;
        x = x / 10;
        sum1 = sum1 + mod1;
        int mod2 = x % 10;
        x = x / 10;
        mod2 = mod2 * 2;
        int div1 = mod2 % 10;
        int div2 = mod2 / 10;
        sum2 = sum2 + div1 + div2;
    }
    while (x > 0);    
    int total = sum1 + sum2;

    if (total % 10 != 0)
    {
        printf("INVALID CARD NUMBER\n");
    }
    printf("Valid Card Number\n");

    long type = l;
    do
    {
        type = type / 10;
    }
    while (type > 100);

    if ((type / 10 == 5) && (0 < type % 10 && type % 10 < 6))
    {
        printf("TYPE: MASTERCARD\n");
    }
    else if ((type / 10 == 3) && (type % 10 == 4 || type % 10 == 7))
    {
        printf("TYPE: AMEX\n");
    }
    else if (type / 10 == 4)
    {
        printf("TYPE: VISA\n");
    }
    else
    {
        printf("INVALID TYPE\n");
    }
}