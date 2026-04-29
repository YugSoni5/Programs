#include <stdio.h>

int main()

{
    int array[10] = {10, 21, 54, 34, 87, 12, 20, 2, 10};
    int n, i;
    int found = 0;
    printf("enter teh number you want to search");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == array[i])
        {
            found = 2;
            break;
        }
    }
    if (found == 1)
    {
        printf("YES IS IT PRESENT");
    }
    else
    {
        printf("NOPE NOT FOUND IN THE DATABASE");
    }
}