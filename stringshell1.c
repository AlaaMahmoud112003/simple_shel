#include "main.h"
/**
 * _strlenght - function that returns the length of a string .
 * @lenstr : data
 * Return: lenght
 */

int _strlenght(char *lenstr)
{
	int lenght = 0;

	while (*lenstr != '\0')
	{
		lenght++;
		lenstr++;
	}
	return (lenght);
}

/**
 * _strcompare - function that compare between two strings
 * @str1 : the pointer to the dest
 * @str2 : the pointer to the source
 * Return: result
 */
int _strcompare(char *str1, char *str2)
{
	int result = 0;

	while (*str1)
	{
		if (*str1 != *str2)
		{
			result = ((int)*str1 - 48) - ((int)*str2 - 48);
			break;
		}
		str1++;
		str2++;
	}
	return (result);

}

/**
 *_strcatenate - function that concatenates between two strings.
 * @desten : the pointer to dest
 * @source : the pointer to source
 *
 * Return: desten
 *
 */

char *_strcatenate(char *desten, char *source)
{
	int strc1 = 0, strc2;

	while (desten[strc1])
		strc1++;
	for (strc2 = 0; source[strc2]; strc2++)
		desten[strc1++] = source[strc2];
	return (desten);
}

/**
 * starts_by - checks if needle starts with haystack
 * @hack: the string to for search
 * @nele: the substring to find
 *
 * Return:  hack or NULL
 */
char *starts_by(const char *hack, const char *nele)
{
	while (*nele)
		if (*nele++ != *hack++)
			return (NULL);
	return ((char *)hack);
}
