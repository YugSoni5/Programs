#include <stdio.h>

int factoria(int no)

{
    int fact;
    if (no == 1)
    {
        return (1);
    }
    else
    {
        fact = no * factoria(no - 1);
    }
    return (fact);
}

int main(int argc, char const *argv[])
{
    int no, fact;
    printf("Enter the no");
    scanf("%d", &no);
    fact = factoria(no);
    printf("factorial of the given no is %d", fact);
    return 0;
}
