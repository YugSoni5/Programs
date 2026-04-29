#include<stdio.h>
#include<string.h>

int main  ()

{
    char input_str [10] = "Hello";
    char output_str [10];

    printf("Input str %s", input_str);
    strcpy(output_str, input_str);
    strcpy(output_str, "students");
    printf("output_str: %s", output_str);
    return 0;
}
