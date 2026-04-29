#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Enter first no");
    scanf("%d", &n1);
    printf("Enter second number \n");
    scanf("%d", &n2);
    for (int i = 1;; i = i + 1)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("LCM of %d and %d is %d", n1, n2, i);
            break;
        }
    }

    return 0;
}
