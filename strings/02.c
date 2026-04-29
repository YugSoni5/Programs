#include<stdio.h>
#include<string.h>

int main ()

{
    char s[100];
    int i;
    printf("enter password");
    gets(s);
    i = strcmp(s, "access");
    if (i == 0)
    {
        printf("correct password");
    }
    else
    {
       printf("nope ,,");
    }
    return 0;
}