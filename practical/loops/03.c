#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    printf("Now for");
    for (i = 1; i < 11; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
