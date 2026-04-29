#include<stdio.h>

int main ()

{
    int sub[5];
    int i;
    int total = 0;
    float per;

    printf("enter the marks for five subjects : ");

    for (i = 0; i < 5; i++)
    {
        total = total + sub[i];
        scanf("%d", &sub[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total += sub[i];
    }
    per = (float)total/5;
    printf("Per = %d");
} 
