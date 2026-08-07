#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int rem, dig = 0, org;
    int prod = 0;

    org = n;

    // Count digits
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        dig++;
    }

    // Calculate Armstrong sum
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        prod = prod + (int)pow(rem, dig);
        temp = temp / 10;
    }

    if (prod == org)
        printf("%d is an Armstrong number", org);
    else
        printf("%d is not an Armstrong number", org);

    return 0;
}
