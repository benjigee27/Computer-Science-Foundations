#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // 1. Validation: Ensure exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // 2. Validation: Ensure the key consists only of digits
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // 3. Convert key string to integer
    int k = atoi(argv[1]);

    // 4. Get the message
    string p = get_string("plaintext: ");

    // 5. Encipher
    printf("ciphertext: ");

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        // Handle Uppercase
        if (isupper(p[i]))
        {
            // Subtract 'A' (65) to get 0-25, shift, wrap, add 'A' back
            printf("%c", (p[i] - 'A' + k) % 26 + 'A');
        }
        // Handle Lowercase
        else if (islower(p[i]))
        {
            // Subtract 'a' (97) to get 0-25, shift wrap, add 'a' back
            printf("%c", (p[i] - 'a' + k) % 26 + 'a');
        }
        // Handle non-alphabetic characters
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");
    return 0;
}
