#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long creditcard;
    long number_def;
    int other_digit;
    int last_digit;
    int last_digit2;
    long digits;
    int lasts;
    int sum = 0;
    int sum2 = 0;
    int sum3;

    // Get a positive credit card number from the user
    do
    {
        creditcard = get_long("Credit card number: ");
    } while (creditcard <= 0);

    // Calculate the checksum using Luhn's algorithm
    number_def = creditcard / 10;

    while (number_def > 0)
    {
        last_digit2 = (number_def % 10) * 2;
        last_digit2 = (last_digit2 / 10) + (last_digit2 % 10);

        sum = sum + last_digit2;

        number_def = number_def / 100;
    }

    // Calculate the sum of the remaining digits
    while (creditcard > 0)
    {
        last_digit = (creditcard % 10);
        sum2 = sum2 + last_digit;

        creditcard = creditcard / 100;
    }

    // Calculate the total sum
    sum3 = sum + sum2;

    // Check if the total sum is valid
    if (sum3 % 10 == 0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}
