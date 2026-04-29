#include<stdio.h>

void myfunction();

int main(int argc, char const *argv[])
{
    printf("Hello form main() function");
    myfunction();
    return 0;
}

void myfunction ()

{
    printf("THIS IS MY FUNCTION");
}