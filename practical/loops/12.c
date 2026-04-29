#include<stdio.h>

int main(int argc, char const *argv[])
{
    int b, p, f = 1;
    printf("Enter the base \n");
    scanf("%d", &b);
    printf("Enter the power");
    scanf("%d", &p);
    for (int i = 1; i <= p; i++)
    {
        f = f*b;
    }
    printf("Result = %d", f);
    return 0;
}
