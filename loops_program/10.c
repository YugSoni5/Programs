// #include <stdio.h>

// int main()

// {
//     int num, i, c, s, n;
//     printf("rnter the maximum no: ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         for ( i = 0; i <= num; i++)
//         {
//             for (s = num - i; s >= 1; s--)
//             {
//                 printf(" ");
//                 printf("%d", i);
//             }
//             for (s = i * 2; s > 1; s--)
//             {
//                 printf(" ");
//                 printf("%d", i);
//             }
//             printf("\n");
//         }
//         for (i = 1; n = num - 1; i<num , i++, n--)
//         {
//             for (s = i; s >= 1; s--)
//             {
//                 printf(" ");
//                 printf("%d", n);
//             }

//             for (s = n*2; s > 1; s--)
//             {
//                 printf(" ");
//                 printf("%d", n);
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int num, i, j, s;

    printf("Enter the maximum number: ");
    scanf("%d", &num);

    // Upper part
    for (i = 1; i <= num; i++)
    {
        // spaces
        for (s = num - i; s >= 1; s--)
        {
            printf(" ");
        }

        // numbers increasing
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        // numbers decreasing
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    // Lower part
    for (i = num - 1; i >= 1; i--)
    {
        // spaces
        for (s = num - i; s >= 1; s--)
        {
            printf(" ");
        }

        // numbers increasing
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        // numbers decreasing
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}


