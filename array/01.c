#include <stdio.h>

int main()

{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Contasyt of the array");
    for (i = 0; i < 5; i++)
    {
        printf("Value at arr [%d] is %d \n", i, arr[i]);
    }
    return 0;
}