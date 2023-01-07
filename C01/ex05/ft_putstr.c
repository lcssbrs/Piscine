#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		ft_putstr(ag[1]);
		write (1, "\n", 1);
		return (0);
	}
	else
		return (1);
}
