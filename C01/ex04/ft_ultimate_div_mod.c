void	ft_ultimate_div_mod(int *a, int *b)
{
	int i;
	int j;
	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}

#include <stdio.h>

int main ()
{
	int	a;
	int	b;

	a = 10;
	b = 4;
	
	printf("%d\n", a);
	printf("%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}

