#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a = 0;
	while(a <= 98)
	{
		int b = a + 1;
		while(b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			write(1, " ", 1);
			ft_putchar((b / 10) + 48);
                        ft_putchar((b % 10) + 48);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
