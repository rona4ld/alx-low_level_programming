#include <stdlib.h>

/**
 * create_array - create an array of characters of size `size`
 * initialize each element to the character `c`.
 * @size: the size of the array to create.
 * @c: the character to initialize each element of the array with.
 *
 * Return: a pointer to the allocated memory, or NULL on failure.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * (size + 1)); /* add space for null terminator*/
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	str[size] = '\0'; /* add null terminator*/

	return (str);
}
