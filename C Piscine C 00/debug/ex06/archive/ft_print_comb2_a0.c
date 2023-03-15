#include <unistd.h>

void ft_print_comb2(void)
{
	char	c[6];

	c[2] = ' ';
	c[0] = '0';
	c[5] = ',';
	while(c[0] <= '9')
	{
		c[1] = '0';
		while(c[1] <= '9')
		{
			c[3] = c[0];
			c[4] = c[1]+1;
			while(c[3] <= '9')
			{
				while(c[4] <= '9')
				{	
					if(c[0] != '9' || c[1] != '9')
					{
						write(1, &c, 6);
					}
					++c[4];
				}
				c[4] = '0';
				++c[3];
			}
			++c[1];
		}
		++c[0];
	}
}