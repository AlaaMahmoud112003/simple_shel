#include "main.h"

/**
 * _strcopy - function that copy the string pointed .
 * @strdest : the pointer to dest
 * @strsrc : the pointer to source
 *
 * Return: strdest
 */

char *_strcopy(char *strdest, char *strsrc)
{
	int z = -1;

	do {
		z++;
		strdest[z] = strsrc[z];
	} while (strsrc[z] != '\0');
	return (strdest);
}

/**
 * _putchar_c - function that writes the character of c to stdout.
 * @char_c: The character to print
 *
 * Return: on successed 1
 *	   on failed -1
 */

int _putchar_c(char char_c)
{
	return (write(1, &char_c, 1));
}

/**
 * _putint - function that updates value it points to 98.
 * @str_put : pointer to intger
 *
 */

void _putint(char *str_put)
{
	while (*str_put != '\0')
	{
		putchar(*str_put);
		str_put++;
	}
	putchar('\n');
}

/**
 * _strduplicate - function that duplicate to new memory space in the location.
 * @str: data char
 * Return: memory
 */

char *_strduplicate(char *str)
{
	char *memory;
	int s = 0, x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[s] != '\0'; s++)
		;
	memory = malloc(s + 1);
	if (memory == 0)
		return (NULL);
	for (x = 0; x < s; x++)
		memory[x] = str[x];
	return (memory);

