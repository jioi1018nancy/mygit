#include <stdio.h>

void myputs(char *str)
{
    int i = 0;
//    for (i = 0; str[i]; i++)
//        putchar(str[i]);
//    while (str[i] != '\0')
//        putchar(str[i++]);
    do
    {
        putchar(str[i]);
        i++;
    }while (str[i] != '\0');
    putchar('\n');
}

void myputs2(char *str)
{
    while (*str)
        putchar(*str++);
    putchar('\n');
}

int main(int argc, const char *argv[])
{
    char str[] = "hello!";
    myputs(str);
    myputs2(str);
    return 0;
}
