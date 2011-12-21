#include <stdio.h>
#include <string.h>

void rever(char *p)
{
    int i;
    for (i = strlen(p) - 1; i >= 0; i--)
        putchar(p[i]);
    putchar('\n');
}

int main(void)
{
    char str[] = "hello";
    rever(str);
    return 0;
}
