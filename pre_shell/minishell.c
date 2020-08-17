#include "holberton.h"

/**
	@brief Main entry point.
	@param ac Argument count.
	@param av Argument vector.
	@return status code
 */
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	/*Load config files, if any.*/
	/*Run command loop.*/
	lsh_loop();

	/*Perform any shutdown/cleanup.*/

	return EXIT_SUCCESS;
}
