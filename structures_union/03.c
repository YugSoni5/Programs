#include<stdio.h>

struct university
{
    int uniCode;
    char uniName[30];
};

struct Collage
{
    int clgCode;
    char clgName[30];
    struct university u;
}c;

int main(int argc, char const *argv[])
{
    printf("Enter detainls");
    printf("Collag code");
    scanf("%d", &c.clgCode);
    fflush(stdin);
    gets(c.u.uniName);
    printf("\n--------------------------------------");
    printf("Details: ");
    printf("\n--------------------------------------");
    printf("\nCollage code: %d", c.clgCode);
    printf("\nCollage name : %s", c.clgName);
    printf("\nUniversity Code : %d", c.u.uniCode);
    printf("\nUniversity N,ar %s", c.u.uniName);
    return 0;
}

