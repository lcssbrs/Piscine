#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int ac, char **ag)
{
	if (ac == 2)
	{
		int	i;

		i = ft_strlen(ag[1]);
		printf("%d\n", i);
		return (0);
	}
	else
		return (1);
}
