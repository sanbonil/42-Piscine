/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:49:28 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 15:14:46 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	int	n;

	n = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}

/*int main ()
{
	int nb;
	int index = 5;
	nb = ft_fibonacci(index);
	printf("%i", nb);
	return (0);
}*/
