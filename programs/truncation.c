# include <stdio.h>
# include <cs50.h>

int main (void)
{
    // Get numbers from the user
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Divide x and y and store it in z
    //float z = x / y;

    // Type casting the variables
    float z = (float) x / (float) y;

    // Print out the result
    printf("%f\n" , z);
}