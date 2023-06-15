#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp; 

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
int	main()
{
	int tab[] = {5, 4, 3, 2, 1, 0};
	int size = 6;

	ft_sort_int_tab(tab, size);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}	
}	
