#include <stdio.h>
#include "main.h"
#include "_putchar.c"
#include "6-abs.c"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
    
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
