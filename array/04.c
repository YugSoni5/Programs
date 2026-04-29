#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int arr[5];
    int i;
    printf("enter teh element of the array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("content of the array in reverse order");
    for (i = 0; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
