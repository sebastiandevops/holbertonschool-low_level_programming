#include <unistd.h>

#define STDOUT 1

int main()
{
	write(STDOUT, "Hello, Holberton\n", 17);
	_exit(0);
}
