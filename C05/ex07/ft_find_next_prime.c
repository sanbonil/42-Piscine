/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:01:27 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/08 13:47:47 by sanbonil         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*int main()
  {
  int nb = 14;

  printf("%i",ft_find_next_prime(nb));
  return (0);
  }*/
