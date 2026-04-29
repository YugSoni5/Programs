#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char s[50];
    fp = fopen("document/index.txt", "m");
    printf("Enter the string :");
    gets(s);
    fputs(s, fp);
    fputs("\n", fp);
    fclose(fp);

    return 0;
}
