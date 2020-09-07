/**
 * _isupper - return 1 if is uppercase, else 0
 * @c: The character to check
 *
 * Return: On success 1.
 * Else, 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
