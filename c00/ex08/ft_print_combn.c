#include <unistd.h>

void ft_first(int *arr, int len, int n, int counter)
{
	while(arr[len-2] <= '8')
	{
		if(arr[len-2] != '8')
			write(1, ", ", 2);
		arr[len-2]++;
		arr[len-1] = arr[len-2];
		while(arr[len-1]++ <= '8')
                {
			while(counter <= n)
			{
				write(1, &arr[counter], 1);
				counter++;
			}
			if(arr[len-1] != '9')
				write(1, ", ", 2);
			counter = 0;
		}
	}
}

void ft_print_combn(int n)
{
        int len = n;
        int counter = 0;
        int a = 48;
        int arr[n];
        while(n > 0)
        {
                arr[counter] = a;
                a++;
                counter++;
                n--;
        }
        n = len;
        a = 0;
        counter = 0;
        while(counter <= n)
        {
                write(1, &arr[counter], 1);
                counter++;
        }
        arr[counter] = '\0';
        write(1, ", ", 2);
        counter = 0;

        while(arr[len-1]++ <= '8')
        {
                while(counter <= n)
                {
                        write(1, &arr[counter], 1);
                        counter++;
                }
                if(arr[len-1] != '9')
                        write(1, ", ", 2);
                counter = 0;
        }

        if(n > 1)
                ft_first(arr, len, n, counter);

         if(n > 2)
        {
                while(arr[len-3] <= '7')
                {
                        arr[len-3]++;
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                        ft_first(arr, len, n, counter);
                }
        }
	if(n > 3)
        {
                while(arr[len-4] <= '6')
                {
                        arr[len-4]++;
                        arr[len-3] = arr[len-4];
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                        while(arr[len-3] <= '7')
                        {
                                arr[len-3]++;
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                ft_first(arr, len, n, counter);
                        }
                }
        }

        if(n > 4)
        {
                while(arr[len-5] <= '5')
                        {
                                arr[len-5]++;
                                arr[len-4] = arr[len-5];
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                        while(arr[len-4] <= '6')
                        {
                                arr[len-4]++;
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                while(arr[len-3] <= '7')
                                {
                                        arr[len-3]++;
                                        arr[len-2] = arr[len-3];
                                        arr[len-1] = arr[len-2];
                                        ft_first(arr, len, n, counter);
                                }
                        }
                }
        }
if(n > 5)
        {
                while(arr[len-6] <= '4')
                {
                        arr[len-6]++;
                        arr[len-5] = arr[len-6];
                        arr[len-4] = arr[len-5];
                        arr[len-3] = arr[len-4];
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                while(arr[len-5] <= '5')
                        {
                                arr[len-5]++;
                                arr[len-4] = arr[len-5];
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                        while(arr[len-4] <= '6')
                        {
                                arr[len-4]++;
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                while(arr[len-3] <= '7')
                                {
                                        arr[len-3]++;
                                        arr[len-2] = arr[len-3];
                                        arr[len-1] = arr[len-2];
                                        ft_first(arr, len, n, counter);
                                }
                        }
                }
                }
        }
if(n > 6)
        {
                while(arr[len-7] <= '3')
                {
                        arr[len-7]++;
                        arr[len-6] = arr[len-7];
                        arr[len-5] = arr[len-6];
                        arr[len-4] = arr[len-5];
                        arr[len-3] = arr[len-4];
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                        while(arr[len-6] <= '4')
                        {
                                arr[len-6]++;
                                arr[len-5] = arr[len-6];
                                arr[len-4] = arr[len-5];
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                while(arr[len-5] <= '5')
                                {
                                        arr[len-5]++;
                                        arr[len-4] = arr[len-5];
                                        arr[len-3] = arr[len-4];
                                        arr[len-2] = arr[len-3];
                                        arr[len-1] = arr[len-2];
                                        while(arr[len-4] <= '6')
                                        {
                                                arr[len-4]++;
                                                arr[len-3] = arr[len-4];
                                                arr[len-2] = arr[len-3];
                                                arr[len-1] = arr[len-2];
                                                while(arr[len-3] <= '7')
                                                {
                                                        arr[len-3]++;
                                                        arr[len-2] = arr[len-3];
                                                        arr[len-1] = arr[len-2];
                                                        ft_first(arr, len, n, counter);
                                                }
                                        }
                                }
                        }
                }
        }
if(n > 7)
        {
                while(arr[len-8] <= '2')
                {
                        arr[len-8]++;
                        arr[len-7] = arr[len-8];
                        arr[len-6] = arr[len-7];
                        arr[len-5] = arr[len-6];
                        arr[len-4] = arr[len-5];
                        arr[len-3] = arr[len-4];
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                        while(arr[len-7] <= '3')
                        {
                                arr[len-7]++;
                                arr[len-6] = arr[len-7];
                                arr[len-5] = arr[len-6];
                                arr[len-4] = arr[len-5];
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                while(arr[len-6] <= '4')
                                {
                                        arr[len-6]++;
                                        arr[len-5] = arr[len-6];
                                        arr[len-4] = arr[len-5];
                                        arr[len-3] = arr[len-4];
                                        arr[len-2] = arr[len-3];
                                        arr[len-1] = arr[len-2];
                                        while(arr[len-5] <= '5')
                                        {
                                                arr[len-5]++;
                                                arr[len-4] = arr[len-5];
                                                arr[len-3] = arr[len-4];
                                                arr[len-2] = arr[len-3];
                                                arr[len-1] = arr[len-2];
                                                while(arr[len-4] <= '6')
                                                {
                                                        arr[len-4]++;
                                                        arr[len-3] = arr[len-4];
                                                        arr[len-2] = arr[len-3];
                                                        arr[len-1] = arr[len-2];
                                                        while(arr[len-3] <= '7')
                                                        {
                                                                arr[len-3]++;
                                                                arr[len-2] = arr[len-3];
                                                                arr[len-1] = arr[len-2];
                                                                ft_first(arr, len, n, counter);
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
 if(n > 8)
        {
                while(arr[len-9] <= '1')
                {
                        arr[len-9]++;
                        arr[len-8] = arr[len-9];
                        arr[len-7] = arr[len-8];
                        arr[len-6] = arr[len-7];
                        arr[len-5] = arr[len-6];
                        arr[len-4] = arr[len-5];
                        arr[len-3] = arr[len-4];
                        arr[len-2] = arr[len-3];
                        arr[len-1] = arr[len-2];
                        while(arr[len-8] <= '2')
                        {
                                arr[len-8]++;
                                arr[len-7] = arr[len-8];
                                arr[len-6] = arr[len-7];
                                arr[len-5] = arr[len-6];
                                arr[len-4] = arr[len-5];
                                arr[len-3] = arr[len-4];
                                arr[len-2] = arr[len-3];
                                arr[len-1] = arr[len-2];
                                while(arr[len-7] <= '3')
                                {
                                        arr[len-7]++;
                                        arr[len-6] = arr[len-7];
                                        arr[len-5] = arr[len-6];
                                        arr[len-4] = arr[len-5];
                                        arr[len-3] = arr[len-4];
                                        arr[len-2] = arr[len-3];
                                        arr[len-1] = arr[len-2];
                                        while(arr[len-6] <= '4')
                                        {
                                                arr[len-6]++;
                                                arr[len-5] = arr[len-6];
                                                arr[len-4] = arr[len-5];
                                                arr[len-3] = arr[len-4];
                                                arr[len-2] = arr[len-3];
                                                arr[len-1] = arr[len-2];
                                                while(arr[len-5] <= '5')
                                                {
                                                        arr[len-5]++;
                                                        arr[len-4] = arr[len-5];
                                                        arr[len-3] = arr[len-4];
                                                        arr[len-2] = arr[len-3];
                                                        arr[len-1] = arr[len-2];
                                                        while(arr[len-4] <= '6')
                                                        {
                                                                arr[len-4]++;
                                                                arr[len-3] = arr[len-4];
                                                                arr[len-2] = arr[len-3];
                                                                arr[len-1] = arr[len-2];
                                                                while(arr[len-3] <= '7')
                                                                {
                                                                        arr[len-3]++;
                                                                        arr[len-2] = arr[len-3];
                                                                        arr[len-1] = arr[len-2];
                                                                        ft_first(arr, len, n, counter);
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
}
int main()
{
        ft_print_combn(9);
        write(1, "\n", 1);
}

