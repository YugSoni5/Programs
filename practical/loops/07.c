#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no, b, p, f;
    printf("Enter any no-");
    scanf("%d", &no);
    f = no % 10;
    while (no != 0)
    {
        b = no % 10;
        no = no / 10;
    }
    printf("First digit = %d and last digit = %d", b, f);
    return 0;
}
