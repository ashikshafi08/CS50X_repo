# include <cs50.h>
# include <stdio.h>

int main (void)
{
    // Gets a string form the user, mostly it will be a name
    string answer = get_string("What is your name? ");

    // Gets the age of the user, it is stored as string not integer
    string age = get_string("What is your age? ");

    // Prints out all the info we've recieved from user and prints with a greeting message
    printf("Greetings %s, good to know you are %s years of age" , answer , age);

}


