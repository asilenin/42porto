#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				//write(1, &i, 1);
				//write(1, &j, 1);
				//write(1, &k, 1);
				write(1, &i&j&k, 3);
				if (i + j + k != 24)
				{
					write(1, ", ", 2);
				}
				++k;
			}
			++j;
		}
		++i;
	}
	write(1, ".", 1);
}