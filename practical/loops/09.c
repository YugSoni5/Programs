#include<stdio.h>

int main(int argc, char const *argv[])
{
    int no;
    printf("Entet any no \n");
    scanf("%d", &no);
    printf("Natural no from 1 to %d is given below\n", no);
    for (int i = 1; i <= no; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
