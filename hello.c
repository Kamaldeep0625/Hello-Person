//Adds access to libraries sdio and cs50 for certain features
#include <stdio.h>
#include <cs50.h>
//helps start off any program
int main(void)
//Start of program
{
//Allows assignment of a custom name by the user as the variable equal to answer
    string answer = get_string("What is your name? ");
    //displays output with custom variable for the name as user inputs previously
    printf("hello, %s\n", answer);
//End of program
}
