#include <stdio.h>

int main()

{
    int unit, bill_amt;
    printf("enter the ele unit");
    scanf("%d", &unit);
    if (unit <= 100)
    {
        bill_amt = unit * 3;
        printf("bill amt", &bill_amt);
    }
    else
    {
        bill_amt = unit * 5;
        printf("bill amt", &bill_amt);
    }

    return 0;
}