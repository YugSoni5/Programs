#include <stdio.h>

void funa();
void funb();
void func();
void fund();

int main(int argc, char const *argv[])
{
    printf("Hello from main function");
    funa();
    printf("Bye from the main func");
    return 0;
}

void funa()

{
    printf("Hey this is fun a");
    funb();
}

void funb()

{
    printf("Hello from the b function");
    func();
    printf("Bye");
}

void func()

{
    printf("This is function c");
    fund();
    printf("Bye from c");
}

void fund()

{
    printf("Hello from fund");
    printf("Bye");
}
