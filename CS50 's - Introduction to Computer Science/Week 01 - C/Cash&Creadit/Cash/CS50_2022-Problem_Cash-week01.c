#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int counter_quarters = 0;
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = pennies;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    // do this while the entered value isn't correct.
    do
    {
        cents = get_int("Enter the dollar amount: ");
    }
    // the variable cents must not be less than or equal to 0 (zero).
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    int counter_quarters = 0, quarters = 0;
    while (cents >= 25)
    {
        cents -= 25; // a quarter is a constant, and each time the while is executed, it subtract a quarter and after assigns a new value to the variable.
        counter_quarters++; // this variable show us the required amount of quarter coins.
        quarters = counter_quarters;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int counter_dimes = 0, dimes = 0;
    while (cents >= 10)
    {
        cents -= 10;
        counter_dimes++;
        dimes = counter_dimes;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int counter_nickels = 0, nickels = 0;
    while (cents >= 5)
    {
        cents -= 5; // a quarter is a constant, and each time the while is executed, it subtract a quarter and after assigns a new value to the variable.
        counter_nickels++; // this variable show us the required amount of quarter coins.
        nickels = counter_nickels;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int counter_pennies = 0, pennies = 0;
    while (cents >= 1)
    {
        cents -= 1; // a quarter is a constant, and each time the while is executed, it subtract a quarter and after assigns a new value to the variable.
        counter_pennies++; // this variable show us the required amount of quarter coins.
        pennies = counter_pennies;
    }
    return pennies;
}