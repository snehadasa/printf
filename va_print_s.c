#include "holberton.h"

/**
 * va_putstr - get value with va_arg and then _printstr
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_s(va_list valist)
{
	char *s = (va_arg(valist, char*));
	return (print_string(s));
}
