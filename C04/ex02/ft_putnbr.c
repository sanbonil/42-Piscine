/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:47:11 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/27 18:20:42 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (0 <= nb && nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	else if (nb < 0)
	{
		nb = (-1) * nb;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
}
/*int main(void)
{
	ft_putnbr(42);
	return(0);
}*/
