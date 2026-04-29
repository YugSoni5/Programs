#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a = 10;
    int *p;
    int **q;
    int ****************r;
    p = &a;
    q = &p;
    r = &q;
    printf("Value of a %d", a);
    printf("Value of a :");
    return 0;
}
