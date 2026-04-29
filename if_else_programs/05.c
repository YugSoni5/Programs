#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    if (age >= 18 && age <= 120)
    {
        printf("you are eligable");
    }
    else
    {
        printf("you are nog");
    }

    return 0;
}