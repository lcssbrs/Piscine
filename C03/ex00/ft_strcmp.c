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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i]- s2[i]);
}

int	main(int ac, char **ag)
{
	if (ac > 2)
	{
		int	i;

		i = ft_strcmp(ag[1], ag[2]);
		ft_putnbr(i);
		write (1, "\n", 1);
		return (0);
	}
	else
		return (1);
}
