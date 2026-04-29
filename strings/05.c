#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s [80];
    int i;
    printf("Enter the string");
    gets(s);
    i = strlen(s);
    printf("Length is %d", i);
    return 0;
}
