/**
 * _memset - sets a given amount of bytes to a value at an address
 * 
 * @s: memory location to start at
 * @b: character to write to memory
 * @n: number of bytes to write
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{	
		s[n - 1] = b;
		n--;
	}

	return (s);
}
