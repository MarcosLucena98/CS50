#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// functions
bool only_digits(string key);
bool rotate(int k, string text);

// main function
int main(int argc, string argv[])
{
    string key = argv[1];
    // if argc is different from two, return 1.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // if not, run the program completely
    else
    {
        //variables
        bool t2 = only_digits(key);
        int k = atoi(key);
        // if the function return 0, run the program
        if (t2 == 0)
        {
            //asks the user for a phrase
            string text = get_string("plaintext: ");
            printf("ciphertext: ");
            //run the function rotate
            bool caract = rotate(k, text);
            printf("\n");
        }
    }
}
//function only digitts return true or false
bool only_digits(string key)
{
    //count the number of characters
    int n = strlen(key);
    for (int i = 0; i < n; i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    return 0;
}
// function rotate, print the text
bool rotate(int k, string text)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (islower(text[i]))
        {
            printf("%c", (((text[i] - 97) + k) % 26) + 97);
        }
        else if (isupper(text[i]))
        {
            printf("%c", (((text[i] - 65) + k) % 26) + 65);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    return 0;
}