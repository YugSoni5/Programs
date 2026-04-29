#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *IPL[] = {"Chennai super kings", "Rajasthan Royal", "TDR", "TDR", "tdr"};
    int i;
    int count = 8;
    printf("IPL Teams");
    for (i = 0; i < count; i++)
    {
        printf(">> %s", IPL[i]);
    }
    
    return 0;
}
