#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main()
{
	char z;

	z = 'z';
	ft_putchar(z);
	write (1, "\n", 1);
}
