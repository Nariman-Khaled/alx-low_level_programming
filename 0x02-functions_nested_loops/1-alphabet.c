#include <stdio.h>
#include "main.h"

/**
 * main - application entry point
 *
 * Return: Always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet
*/
void print_alphabet(void)
{
	print("abcdefghijklmnopqrstuvwxyz\n");
}
