#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no;
    printf("Enter any no");
    scanf("%d", &no);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i*no);
    }
    
    return 0;
}
