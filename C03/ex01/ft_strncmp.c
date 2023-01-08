int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

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
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
}

int	main(int ac, char **ag)
{
	unsigned int	i;
	int	n;

	n = 3;
	if (ac > 2)
	{
		i = ft_strncmp(ag[1], ag[2], n);
		ft_putnbr(i);
		write (1, "\n", 1);
		return (0);
	}
	else
		return (1);
}
