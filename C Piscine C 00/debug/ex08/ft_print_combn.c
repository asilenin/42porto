/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilenin <asilenin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:57:16 by asilenin          #+#    #+#             */
/*   Updated: 2023/05/17 22:46:43 by asilenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_c(char *c, int n, int l)
{
	int	i;

	i = 0;
	if (c[0] == l)
	{
		while (i < n)
			ft_putchar(c[i++]);
		return ;
	}
	while (i < n)
		ft_putchar(c[i++]);
	write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	c[10];
	char	c_max[10];
	int		i;
	int		d;
	int		s;

	i = 0;
	while (i < n)
	{
		c[i] = i + 48;
		c_max[i] = (10 - n) + i + 48;
		++i;
	}
	ft_print_c(c, n, c_max[0]);
	while (c[0] != c_max[0])
	{
		d = n - 1;
		while (c[d] == c_max[d])
			--d;
		s = ++(c[d]);
		while (d < n)
			c[++d] = ++s;
		ft_print_c(c, n, c_max[0]);
	}
}
