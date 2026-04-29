#include <stdio.h>

int sum(int, int);

int main(int argc, char const *argv[])
{
    int a, b, ans = 0;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);
    ans = sum(a, b);
    printf("Sum of A + B is %d", ans);
    return 0;
}

int sum(int x, int y)

{
    int sum = 0;
    sum = x + y;
    return sum;
}
