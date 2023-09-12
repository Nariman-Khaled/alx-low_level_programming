#include <stdio.h>
#include "main.h"
#include "_putchar.c"
#include "10-add.c"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
