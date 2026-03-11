#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // GET HEIGHT BETWEEN 1-8
    do
    {
        height = get_int("Height:");
    }
    while (height < 1 | height > 8);

    // PYRAMID LOGIC
    for (int i = 0; i < height; i++)
    {
        // 1. PRINT LEFT SPACES
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // 2. PRINT LEFT HASHES
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // 3. PRINT THE MIDDLE GAP
        printf("  ");

        // 4. PRINT RIGHT HASHES
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        // 5. MOVE TO THE NEXT LINE
        printf("\n");
    }
}
