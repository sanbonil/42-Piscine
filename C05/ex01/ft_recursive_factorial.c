/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:09:17 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/02 11:41:22 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

/*int main()
 * {
 * int nb = 4;
 * ft_recursive_factorial(nb);
 * return 0;
 * }*/
