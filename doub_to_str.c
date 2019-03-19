#include "holberton.h"

/**
 * d_to_str - converts decimal to string.
 * @num: decimal number to be converted.
 * Return: string concat of str1, ".", str2.
 */
char *d_to_str(double num)
{
	int i;
	double dec;
	char *str1, *str2, *result;


	i = num;
	str1 = i_to_str((int)num, 10);
	dec = num - (int)num;

	i = dec * 1000000;
	str2 = i_to_str(i, 10);

	result = strcat_1(str1, ".");

	return (strcat_1(result, str2));

}
