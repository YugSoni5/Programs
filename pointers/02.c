#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    int y = 20;
    int *ptr;
    ptr = &x;
    printf("Value of x : %d", *ptr);
    ptr = &y;
    printf("Value of y: %d", *ptr);
    return 0;
}
