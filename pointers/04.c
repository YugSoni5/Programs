#include <stdio.h>

int main(int argc, char const *argv[])
{

    int x = 30;
    int *ptr;
    printf("Value of X : %d", x);
    ptr = &x;
    *ptr = 100;
    printf("value of X : %d", x);
    return 0;
}
