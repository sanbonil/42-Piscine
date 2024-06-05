/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:00:49 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/01 03:17:28 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*include <stdio.h>*/

int	ft_checksp(char *str)
{
	int	countm;
	int	i;

	countm = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			countm++;
			i++;
		}
		else
			i++;
	}
	return (countm);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	countm;

	i = 0;
	n = 0;
	countm = ft_checksp(str);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (!(str[i] >= '0' && str[i] <= '9'))
			i++;
		else
		{
			n = n * 10 + (str[i] - '0');
			i++;
		}
	}
	if (countm % 2 == 1)
		return (-n);
	else
		return (n);
}
/*int main ()
 * {
 * char str[] = "   --+-123";
 * int resultado = ft_atoi(str);
 * printf("El resultado es: %d\n", resultado);
 * return 0;
 * }*/
