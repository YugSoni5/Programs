#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i = 10;
    float f = 3.14;
    char character = 'A';
    int *i_ptr = &i;
    char *c_ptr = &character;
    float *f_ptr = &f;
    printf("Value of I : %d \n", *i_ptr);
    printf("valur of c %c", *c_ptr);
    return 0;
}
