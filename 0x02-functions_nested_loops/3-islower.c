/**
 * _islower - return 1 if is lowercase, else 0
 *
 *
 * Return: On success 1.
 * Else, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
