# include <stdio.h>
# include <cs50.h>


// Prototype (hinting the compiler)
void meow (void);
void meow_repeat(int num);


// Important block of code 
int main(void)
{
    meow_repeat(10);
}

// Creating a custom function
void meow(void)
{
    printf("Meow..Meow..\n");
}

// Passing arguments to our updated custom function
void meow_repeat(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Meow.\n");
    }
}