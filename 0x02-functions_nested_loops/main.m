#include <stdio.h>
#include "main.h"
#include "_putchar.c"
#include "11-print_to_98.c"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
   print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
