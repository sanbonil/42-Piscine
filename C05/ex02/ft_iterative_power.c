/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:44:08 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/08 15:33:07 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		num = num * nb;
		power--;
	}
	return (num);
}

/*int main ()
{
	int nb = 2;
	int power = 4;
	nb = ft_iterative_power(nb, power);
	printf("%i",nb);
	return (0);
}*/
