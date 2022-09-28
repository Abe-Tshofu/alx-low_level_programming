/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 *
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: number of bytes that matched at start of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

