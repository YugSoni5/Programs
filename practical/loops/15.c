#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 6; // number of rows

    for (i = 0; i < n; i++)
    {

        // Print spaces
        for (j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        // Print decreasing numbers
        for (j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}