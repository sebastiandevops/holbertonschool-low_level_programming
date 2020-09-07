/**
 * _isdigit - return 1 if is digit, else 0
 * @c: The character to check
 *
 * Return: On success 1.
 * Else, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
