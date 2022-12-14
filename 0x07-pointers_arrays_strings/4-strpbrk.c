#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 *
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: number of bytes that matched at start of string
 */
char * _strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	

	for (i = 0; s[i]; j++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
			}
		if (accept[j])
			return (s + i);
}
	return (0);
}
