#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no, f = 1;
    printf("Enter any number");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        f = f * i;
    }
    printf("fACTORAIL = %d", f);
    return 0;
}
