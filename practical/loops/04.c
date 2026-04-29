#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no, b;
    printf("Enter any no for reaverse conversion");
    scanf("%d", no);
    while (no != 0)
    {
        b = no % 10;
        printf("%d", b);
        no = no / 10;
    }
    printf("%d", b);
    return 0;
}
