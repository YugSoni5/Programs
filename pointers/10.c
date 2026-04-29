#include<stdio.h>
#include<conio.h>

int add(int, int);

int main(int argc, char const *argv[])
{
    int ans;
    int (*p) (int, int);
    p = add;
    ans = (*p) (10, 20);
    printf("Ans : %d", ans);
    return 0;
}
