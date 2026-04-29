#include <stdio.h>

int main()

{
    int n, i, sum = 0;
    printf("enter any no");
    scanf("%d", &n);
    for (i = 1; i < n; i = i + 2)
    {
        printf("%d+", i);
        sum += i;
    }
    printf("%d", n);
    printf("\n sum=%d", sum + n);
    return 0;
}