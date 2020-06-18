int _putchar(char c);
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times that the line will be printed.
 *
 * Return: void.
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	if (i < 0)
	{
		_putchar('\n');
	}
}
