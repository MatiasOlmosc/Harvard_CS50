#include <cs50.h>
#include <stdio.h>

// Function to check if a number is prime
bool isPrime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Enter the minimum value: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Enter the maximum value: ");
    }
    while (min >= max);

    // Iterate through the range of numbers and check for prime
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i))
        {
            printf("%i\n", i);
        }
    }
}

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }

    if (number == 2 || number == 3)
    {
        return true;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
