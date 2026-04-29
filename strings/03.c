#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s [80];
    int i;
    printf("Enter the passcode");
    gets(s);
    i = strcmp(s, "access");
    if (i == 0)
    {
        printf("Correct");
    }
    
    return 0;
}
