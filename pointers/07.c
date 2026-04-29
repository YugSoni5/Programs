#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a = 10;
    float f = 3.3;
    void *ptr;
    ptr = &a;
    printf("Value of A %d ", *((int *) ptr));
    ptr = &f;
    printf("value of f : %f", *((float *) ptr));
    return 0;
}
