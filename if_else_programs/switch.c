#include <stdio.h>

int main()

{
    int a, b, ch, ans;
    printf("enter two no for operation");
    scanf("%d %d", &a, &b);
    printf("1 for addition, 2 for subtraction, 3 for multiply and 4 for division");
    printf("Enter you choise");
    scanf("%d", ch);
    switch (ch) :
    {
    case 1:
        ans = a + b;
        printf("ans is %d", &ans);
        break;

    case 2:
        ans = a - b;
        printf("ans is %d", &ans);
        break;

    case 3:
        ans = a * b;
        printf("ans is %d", &ans);
        break;

    case 4:
        ans = a / b;
        printf("ans is %d", &ans);
        break;

    default:
        printf("Invalid choise");
        break;
    }
    return 0;
}