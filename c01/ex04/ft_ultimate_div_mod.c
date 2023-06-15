#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}

int main()
{
	int x;
	int y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Bölüm: %d\n Kalan: %d", x, y);
}
