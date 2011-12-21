#include <stdio.h>

void my_toupper(char *p)
{
    int i;
    for (i = 0; p[i]; i++)
        if (p[i] >= 'a' && p[i] <= 'z')
            putchar(p[i] - 32);
        else 
            putchar(p[i]);
    putchar('\n');
}

int main(void)
{
    char str[] = "hello!";
    my_toupper(str);
    return 0;
}
