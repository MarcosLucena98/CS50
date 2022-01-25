#include <cs50.h>
#include <stdio.h>

//main function
int main(void)
{
    //get a string call name
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}