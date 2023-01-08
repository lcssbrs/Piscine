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

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' & str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int ac, char **ag)
{
	if (ac > 1)
	{
		ft_strupcase(ag[1]);
		ft_putstr(ag[1]);
		write (1, "\n", 1);
	}
}
