#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Prototypes (The Blueprint)
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Get input from user
    string text = get_string("Text: ");

    // Get the counts
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // TODO: Calculate Coleman-Liau index & Print Grade
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    // The Coleman-Liau formula
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // Output the result
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }

    // Debugging print:
    // printf("%i letters, %i words, %i sentences\n", letters, words, sentences);
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            count++;
        }
    }
    return count;
}

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Check for end-of-sentence punctuation
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}
