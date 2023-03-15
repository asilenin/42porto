#include <unistd.h>

void ft_print_comb2(void)
{
	char	c[2];
	char	d[2];

	c[0] = '0';
	while(c[0] <= '9')
	{
		c[1] = '0';
		while(c[1] <= '9')
		{
			d[0] = c[0];
			d[1] = c[1]+1;
			while(d[0] <= '9')
			{
				while(d[1] <= '9')
				{	
					if(c[0] != '9' || c[1] != '9')
					{
						write(1, &c, 2);
						write(1, " ", 1);
						write(1, &d, 2);
						if(c[0] != '9' || c[1] != '8' || d[0] != '9' || d[1] != '9')
						{
							write(1, ", ", 2);
						}
					}
					++d[1];
				}
				d[1] = '0';
				++d[0];
			}
			++c[1];
		}
		++c[0];
	}
}