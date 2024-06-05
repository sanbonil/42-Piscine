/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:35:09 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 14:48:19 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 | power == 0)
		return (1);
	else if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
	}
	else if (power == 1)
		return (nb);
	return (nb);
}
/*int main()
{
	int nb = 2;
	int power = 4;
	nb = ft_recursive_power(nb, power);
	printf("%i",nb);
	return (0);
}*/
