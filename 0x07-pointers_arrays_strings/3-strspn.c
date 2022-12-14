#include <stdio.h>

/**
 * _strspn - multiplies two digits
 * @s: 1st digit in the multiplication
 * @accept: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, insub = 1;

	if (s[0] == '\0' || accept[0] == '\0')
		return (0);
	for (i = 0; s[i] != '\0' && insub; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				insub = 1;
				break;
			}
			else
				insub = 0;
		}
	}
	return (--i);
}
