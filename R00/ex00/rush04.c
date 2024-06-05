/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djuarez <djuarez@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:17:51 by djuarez           #+#    #+#             */
/*   Updated: 2024/03/24 19:39:06 by djuarez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_printsquare(int i, int j, int x, int y)
{
	if ((y == 1 && i == x) || (x == 1 && j == y))
	{
		ft_putchar('C');
	}
	else if ((i == 1 && j == 1) || (i == x && j == y))
	{
		ft_putchar('A');
	}
	else if ((i == 1 && j == y) || (i == x && j == 1))
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == x || j == 1 || j == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x < 1 || y < 1)
	{
		write(2, &"ERROR. Introduce numeros mayor que 1", 37);
	}
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (x == 1 && y == 1)
			{
				ft_putchar('A');
			}
			ft_printsquare(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
