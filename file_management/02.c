#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char s[50];
    fp = fopen("document/index/txt", "r");
    printf(" Sting  = ");
    fgets(s, 49, fp);
    printf("%s", s);
    fclose(fp);

    return 0;
}
