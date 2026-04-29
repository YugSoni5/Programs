#include<stdio.h>

union my
{
    int x;
    float y;
    char z;
}u;

int main(int argc, char const *argv[])
{
    u.x = 10;
    printf("X = %d", u.x);
    u.y = 9.8;
    printf("y = %f", u.y);
    u.z = 'a';
    printf("Z = %c", u.z);
    return 0;
}

