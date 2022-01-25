#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
bool return_grade(int grade);

// main function
int main(void)
{
    string text = get_string("Text: ");
    // call the function count letters
    int letters = count_letters(text);
    printf("%i\n", letters);
    // call the function count words
    float words = count_words(text);
    printf("%f\n", words);
    // call the function count sentences
    int sentences = count_sentences(text);
    printf("%i\n", sentences);
    // calculate text grade
    int grade = round((0.0588 * ((letters / words) * 100.0)) - (0.296 * ((sentences / words) * 100.0)) - 15.8);
    bool readability = return_grade(grade);
}
// function count letters
int count_letters(string text)
{
    int len = strlen(text), letters = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}
// function count words
int count_words(string text)
{
    int words = 0, len = strlen(text);
    int m = len - 1;
    for (int i = 0; i < len; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
        else if (i == m)
        {
            words++;
        }
    }
    return words;
}
// function count sentences
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.')
        {
            sentences++;
        }
        else if (text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
// function return grade
bool return_grade(int grade)
{
    if (grade >= 1 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
    return 0;
}