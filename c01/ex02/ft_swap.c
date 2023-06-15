#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 3;
	printf("x = %d \ny = %d\n", x,y);
	ft_swap(&x, &y);
	printf("x = %d \ny = %d", x,y);
}
