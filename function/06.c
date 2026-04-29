#include<stdio.h>

int fun ()
{
    printf("Hey from fun");
    return 1;

    printf("Bye");
}

int main(int argc, char const *argv[])
{
    printf("Hey from main");
    fun();
    printf("Bye from main");
    return 0;
}
