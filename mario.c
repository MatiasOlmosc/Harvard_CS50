#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = 5;

    // Loop to iterate over rows
    for (int row = 0; row < size; row++)
    {
        // Loop to print spaces
        for (int spaces = 0; spaces < size - row - 1; spaces++)
        {
            printf(" ");
        }

        // Loop to print left side of the pyramid
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf(" "); // Print a space in the middle

        // Loop to print right side of the pyramid
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n"); // Move to the next line for the next row
    }

    return 0; // Program completed successfully
}
