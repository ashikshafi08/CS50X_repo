# include <stdio.h>
# include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree? "); // only works with cs50 module

    // For characters we have to use single quote
    // Adding or for more dyanmic
    if (c == 'y' || c =='Y')
    {
        printf("Yes!");
    }
    else if(c == 'n' || c == 'N')
    {
        printf("No!");
    }
    else
    {
        printf("Please enter the right character...");
    }
}