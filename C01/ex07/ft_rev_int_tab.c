/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:29:28 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/21 14:12:44 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	z;

	i = 0;
	z = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[z];
		tab[z] = temp;
		i++;
		z--;
	}
}
/*int	main(void)
 * {
 * int	tab[] = {1, 2, 3, 4, 5};
 * int size = 5;
 *
 * ft_rev_int_tab(tab, size);
 * return (0);
 * }*/
