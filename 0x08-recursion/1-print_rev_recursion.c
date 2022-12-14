#include "main.h"

/**
 * _print_rev_recursion - function that prints reverse recursion
 * @s: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
