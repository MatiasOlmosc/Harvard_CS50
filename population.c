#include <cs50.h>
#include <stdio.h>

int main()
{
    // Get the starting population size, ensuring it's at least 9
    int start;
    do
    {
        start = get_int("Enter the starting population size: ");
    }
    while (start < 9);

    // Get the target population size, ensuring it's not less than the starting size
    int end;
    do
    {
        end = get_int("Enter the target population size: ");
    }
    while (end < start);

    int years = 0;

    // Simulate population growth until the starting size reaches or exceeds the target size
    while (start < end)
    {
        // Calculate population growth using the formula provided
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // Print the number of years it took to reach the target population size
    printf("Years: %i\n", years);
}
