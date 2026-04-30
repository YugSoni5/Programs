#include <stdio.h>

int main()
{
    int rows = 5; // Number of lines to print

    for (int i = 0; i < rows; i++)
    {
        // First part: Decreasing from i to 0
        for (int j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        // Second part: Increasing from 1 to i
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
