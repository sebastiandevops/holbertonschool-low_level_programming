int _putchar(char c);
/**
 * more_numbers - print numbers trom 0 to 14 10 times.
 *
 *
 * Return: void.
 *
 */
void more_numbers(void)
{
	int c;
	int i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
			{
				_putchar(c + '0');
			}
			if (c > 9 && c < 15)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}
}
