#include <stdio.h>
#include <string.h>

int isEqual(struct my_struct, struct my_struct);

struct my_struct
{
    char name[20];
    int arr[5];
} s1 = {"hello", {1, 2, 3, 4, 5}}, s2 = {"hello", {1, 2, 3, 4, 5}};

int main(int argc, char const *argv[])
{
    if (isEqual(s1, s2))
    {
        printf("Structure varible are equal");
    }
    else
    {
        printf("structure varible are not equal");
    }

    return 0;
}

int isEqual(struct my_struct s1, struct my_struct s2)
{
    int i, count = 0;
    if (!strcmp(s1.name, s2.name))
    {
        for (i = 0; i < 5; i++)
        {
            if (s1.arr[i] == s2.arr[i])
            {
                count++;
            }
        }
        if (count == 5)
        {
            /* code */
            return 0;
        }
    }

    return 0;
}
