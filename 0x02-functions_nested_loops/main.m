#include <stdio.h>
#include "main.h"
#include "_putchar.c"
#include "7-print_last_digit.c"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
