#include<stdio.h>

struct student
{
    char name[30];
    int roll_no;
    float fees;
};

int main(int argc, char const *argv[])
{
    struct student s;
    printf("Enter student's name and roll no and fees");
    gets(s.name);
    scanf("%d", &s.roll_no);
    scanf("%d", &s.fees);
    printf("Students detail : ");
    printf("NAME IS %d ", s.name);
    printf("roll no : %d", s.roll_no);
    printf("Fees %d", s.fees);
    return 0;
    
}

