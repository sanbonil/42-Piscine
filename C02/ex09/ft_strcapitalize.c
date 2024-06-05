/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:57:44 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/26 14:20:36 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	fl;
	char	s;

	i = 0;
	fl = 1;
	while (str[i])
	{
		s = str[i];
		if (fl == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (fl == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (s < '0' || (s > '9' && s < 'A') || (s > 'Z' && s < 'a') || s > 'z')
		{
			fl = 1;
		}
		else
			fl = 0;
		i++;
	}
	return (str);
}
