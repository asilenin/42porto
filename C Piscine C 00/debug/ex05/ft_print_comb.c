#include <unistd.h>

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				write(1, &c, 3);
				if (c[0] != '7' || c[1] != '8' || c[2] != '9')
				{
					write(1, ", ", 2);
				}
				++c[2];
			}
			++c[1];
		}
		++c[0];
	}
}
