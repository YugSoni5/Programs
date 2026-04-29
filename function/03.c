#include <stdio.h>

float largest(float num[], int length)

{
    int i;
    float max = 0.0;
    for (i = 0; i < length; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    float value[4] = {2.5, -4.75, 1.2, 3.67};
    printf("%f \n", largest(value, 4));
    return 0;
}
