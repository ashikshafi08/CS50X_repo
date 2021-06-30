#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    // Dividing the both
    printf("%.10f\n" , x/y);
}