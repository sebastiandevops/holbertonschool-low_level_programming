int _putchar(char c);
/**
 * print_numbers - print numbers from 0 to 9
 *
 *
 * Return: void.
 *
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}
