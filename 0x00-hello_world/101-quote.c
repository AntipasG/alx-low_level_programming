#include <unistd.h>
/**
 *main -void
 *Return: 1
 **/
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-
		19\n";

	write(2, message, 61);
	return (1);
}
