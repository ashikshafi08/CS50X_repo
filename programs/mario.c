#include <stdio.h>
#include <cs50.h>

// Prototyping our custom functions
void loop_question(void);
void loop_ques_improved(void);
void blocks(void);


int main(void)
{
    // Using a function instead
    // loop_question();

    blocks();
}


void blocks(void)
{
    int n = get_int("Enter the width: ");
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void loop_ques_improved(void)
{
    // this will be more dynamic where ? will be printed out as per the user desire
    int n;
    do
    {
        n = get_int("Width: \n");

    }
    while(n < 1);
    // Printing it for the number of times user desire
    for(int i = 0; i<n; i++)
    {
        printf("?");
    }
    printf("\n");
}

void loop_question(void)
{
    for(int i = 0; i<4 ; i++)
    {
        // Not hardcoding rather making it a bit dynamic by using loop
        printf("?");
    }
    // get our cursor to the new line
    printf("\n");
}