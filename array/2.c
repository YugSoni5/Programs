#include <stdio.h>

int main()

{
    int arr[5];
    int i;
    printf("enter elements of the array");
    for (i = 0; i < 5; i++)
    {
        printf("enter the value of the arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    printf("Cintent of this array ");

    for (i = 0; i < 5; i++)
    {
    }
    printf("value at arr[%d] is %d", i, arr[i]);
    return 0;
}