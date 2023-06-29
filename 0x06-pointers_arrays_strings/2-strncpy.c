#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to the first string
 * @src: pointer to another string
 * @n: number of bytes used
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to another string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
