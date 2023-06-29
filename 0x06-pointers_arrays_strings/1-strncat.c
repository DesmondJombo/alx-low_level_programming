#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to another string
 * @n: number of bytes used
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
