#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
