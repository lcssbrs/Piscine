#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (i == len)
		return (1);
	else
		return (0);
}

int	main(int ac, char **ag)
{
	int	i;

	if (ac > 1)
	{
		i = ft_str_is_lowercase(ag[1]);
		ft_putnbr(i);
		write (1, "\n", 1);
		return (0);
	}
	else
		return (1);
}
