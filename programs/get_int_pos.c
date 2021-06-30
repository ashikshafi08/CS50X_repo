// The default header files
#include <stdio.h>
#include <cs50.h>

// Here comes the proto-type of the function
int get_positive_int(void);

int main(void)
{
    // Main stuffs goes in here
    // Using our function that returns a value
    int i = get_positive_int();
    printf("%i\n", i);
}

// Our function (prompts user for positive integer)
// this function takes no arguments but gives us a output
int get_positive_int(void)
{
    int n;

    // First we are going to get a value from the user
    // Do while loop (does the thing at first and then checks the conditionals)
    do
    {
        n = get_int("Positive Integer: ");
    }
    // Create a while loop
    // This helps us in the case if the user enters a value other than from the positive one
    // While n less than 1 ask the user to enter the right value again
    while(n < 1);

    // Returning the positive value
    return n;
}