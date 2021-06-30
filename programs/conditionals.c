#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is not less than y\n");
    }


    // Multiple conditionals
    int a = get_int("a: ");
    int b = get_int("b: ");

    if (a < b)
    {
        printf("a is less than b\n");
    }
    else if(a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a and b both are equal");
    }
}