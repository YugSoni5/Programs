#include<stdio.h>

struct stude
{
    char name [30];
    int roll_no;
    float cgpa;
};

int main(int argc, char const *argv[])
{
    struct stude s = {"Sumit", 1020, 8.8};
    struct stude *ptr = &s;
    printf("Student detais:");
    printf("Name %s", ptr -> name);
    printf("Roll no: %d", ptr -> roll_no);
    printf("CGPA %f", ptr -> cgpa);
    return 0;
}

