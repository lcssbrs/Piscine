void	ft_swap(int *a, int *b)
{
	int	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main()
{
	int a;
	int b;

	a = 5;
	b = 2;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}
