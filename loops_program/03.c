#include<stdio.h>

int main ()

{
    int n, i, r;
    printf("Enter a no for the table");
    scanf("%d", &n);
    for (i = 1; i <=10; i++)
    {
        r = n*i;
        printf("%dx%dx%d\n" ,n,i,r);
    }
    return 0;
}
