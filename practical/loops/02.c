#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i, c, s, n;
    printf("Enter maximaum number");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        for (s = num - i; s >= 1; s--)
        {
            printf(" ");
        }
        printf("%d", i);
        for (s = i * 2; s > 1; s--)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }
    for (i = 1; n = num; i < num, i++, n--)
    {
        for (s = 1; s >= 1; s--)
        {
            printf(" ");
        }
        printf("%d", n);
        for (s = n * 2; s >= 1; s--)
        {
            printf(" ");
        }
        printf("%d", n);
        printf("\n");
    }

    return 0;
}
