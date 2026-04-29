#include <stdio.h>

int main()

{
    int a;
    printf("enter a no;");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 8 == 0)
    {
        printf("divisible by 5 and 8");
    }
    else if (a % 8 == 0)
    {
        printf("divisible by 8");
    }
    else if (a % 5 == 0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("divisible by none");
    }
}