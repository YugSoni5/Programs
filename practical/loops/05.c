#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no, b, sum = 0;
    printf("Enter any no:");
    scanf("%d", &no);
    while (no != 0)
    {
        b = no%10;
        sum = sum + b;
        no = no / 10;
    }
    printf("Total sum of digits - %d", sum);
    return 0;
}
