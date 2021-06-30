#include <stdio.h>
#include <cs50.h>

// Prototyping the function
void left_mario(void);
void hash(void);
void right_mario(void);

int main(void)
{
    right_mario();
}

// Writing our functon in here
void left_mario(void)
{
    // Should be 1-8
    int n;
    do
    {
        n = get_int("Enter a number ranging from 1 to 8: ");
    }
    while(n>8);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            hash();
        }
        printf("\n");
    }
}


void right_mario(void)
{
    int n;
    do
    {
        n = get_int("Enter a number ranging from 1 to 8:");
    }
    while(n>8);
    {
        for(int i = 0; i<n; i++)
        {
            int dots = n - 1;
            for(int j = 0; j<=i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}

void hash(void)
{
    int i = 3
    printf("%i");
}