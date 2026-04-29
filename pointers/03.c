#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("Value of a : %d", a);
    printf("Address of A %u", &a);
    printf("PTR Point to %d", *ptr);
    printf("Address store in ptr : &u", ptr);
    return 0;
}
