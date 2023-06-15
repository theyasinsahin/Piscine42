#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = tmp;
		i++;
	}
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}	
}
