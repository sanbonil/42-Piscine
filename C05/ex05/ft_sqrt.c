/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:15:30 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 16:41:39 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 0;
	while (!(sqrt * sqrt == nb) && sqrt < nb)
	{
		sqrt++;
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}

/*int main()
{
	int nb = 13;
	int sq;
	sq = ft_sqrt(nb);
	printf("%i",sq);
	return (0);
}*/
