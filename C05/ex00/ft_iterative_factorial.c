/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:41:02 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 02:06:41 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (num > 1)
	{
		nb = nb * (num -1);
		num--;
	}
	return (nb);
}
/*int main()
 * {
 * int nb = 4;
 * ft_iterative_factorial(nb);
 * return (0);
 * }*/
