/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:42:20 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 18:29:28 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (!(nb % div == 0) && div <= nb)
		div++;
	if (nb == div)
		return (1);
	if (nb % div == 0)
		return (0);
	return (0);
}

/*int main()
{
	int nb = 13;
	printf("%i", ft_is_prime(nb));
	return (0);
}*/
