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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	main(int ac, char **ag)
{
	unsigned int	n;

	n = 5;
	if (ac > 2)
	{
		ft_strncat(ag[1], ag[2], n);
		ft_putstr(ag[1]);
		write (1, "\n", 1);
		return (0);
	}
	else
		return (1);
}
