#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the five no.: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is the greatest");
        }
        else
        {
            printf("c is the greatest");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf("c is the gratest");
        }
    }
}