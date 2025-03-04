// for question see questGeneral.txt file.

#include <stdio.h>

int isArmstrong(int num);
int getDigits(int num);
int power(int base, int exp);

int main()
{
    int number;

    printf("Enter A Positive Number : ");
    scanf("%d", &number);

    if (number < 0)
        printf("Sorry, Negative Numbers Arn't Considered As Armstrong.");
    else
        isArmstrong(number) ? printf("Yes, %d Is An Armstrong Number.", number) : printf("No %d Is Not An Armstrong Number.", number);

    return 0;
}

int isArmstrong(int num)
{
    int originalNumber = num;
    int noOfDigits = getDigits(num);

    int sum = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        sum += power(lastDigit, noOfDigits);
        num /= 10;
    }

    return (originalNumber == sum) ? 1 : 0;
}

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int getDigits(int num)
{
    int noOfDigits = 0;

    if (num < 0)
        num = -num; // same as num *= -1;

    if (num == 0)
        return 1;
    else
    {
        while (num != 0)
        {
            num /= 10;
            noOfDigits += 1;
        }
    }

    return noOfDigits;
}
