#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initialize variables
    long creditcard;
    long number_def;
    int other_digit;
    int last_digit;
    int last_digit2;
    long digits;
    int lasts;
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    int length = 0;

    // Get a positive credit card number from the user
    do
    {
        creditcard = get_long("Credit card number: ");
    }
    while (creditcard <= 0);

    // Store the original credit card number
    long cc = creditcard;
    long cl = cc;

    // Calculate the length of the credit card number
    while (cc > 0) {
        cc = cc / 10;
        length++;
    }

    // Extract the first two digits of the credit card number
    while (cl >= 100) {
        cl = cl / 10;
    }

    int start = cl;

    // Calculate the checksum for validation
    number_def = creditcard / 10;
    last_digit2 = (number_def % 10) * 2;
    last_digit2 = (last_digit2 / 10) + (last_digit2 % 10);

    while (number_def > 0)
    {
        number_def = number_def / 100;
        lasts = number_def % 10;
        lasts = lasts * 2;
        lasts = (lasts / 10) + (lasts % 10);
        sum = sum + lasts;
    }

    int total = sum + last_digit2;

    last_digit = creditcard % 10;

    while (creditcard > 0)
    {
        creditcard = creditcard / 100;
        digits = creditcard % 10;
        sum2 = sum2 + digits;
    }

    sum3 = total + sum2 + last_digit;

    // Check if the credit card number is valid
    if (sum3 % 10 == 0)
    {
        if ((length == 15) && (start == 34 || start == 37))
        {
            printf("AMEX\n");
        }
        else if (length == 16 && (start >= 51 && start <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if (length == 13 || (length == 16 && ((start / 10) == 4)))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
