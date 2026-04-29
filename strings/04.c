#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1 [80];
    char s2 [80];
    printf("enter the first string");
    gets(s1);
    printf("Second");
    gets(s2);
    strcat(s1 ,s2);
    puts(s1);

    return 0;
}
