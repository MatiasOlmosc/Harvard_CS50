// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);


int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function

float half(float bill, float tax_percent, int tip_percent)
{
    // Convert tax_percent and tip_percent to decimal values
    float tax = tax_percent / 100.0;
    float tip = tip_percent/ 100.0;

    // Calculate the total bill amount, including tax and tip
    float taxx = bill * (tax + 1);
    float tiptax = taxx * (tip + 1);

    float total_amount = tiptax;

    // Calculate half of the total amount, including the bill, tax, and tip
    float half_amount = total_amount / 2.0;

    return half_amount;
}