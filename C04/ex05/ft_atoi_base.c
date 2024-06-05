/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:49:09 by sanbonil          #+#    #+#             */
/*   Updated: 2024/04/01 20:34:07 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_samechar(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_error(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (base[1] == '\0')
		return (1);
	else if (ft_check_samechar(base) == 1)
		return (1);
	return (0);
}

int	ft_checklenght(char *base)
{
	int		i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_checksign(char *str)
{
	int	i;
	int	count_neg;

	count_neg = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			count_neg++;
		}
		i++;
	}
	if (count_neg % 2 == 0)
		return (1);
	else
		return (-1);
}

int	get_nb(char s, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != s)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		n;
	char	s;

	if (ft_check_error(base) == 1)
		return (0);
	else
	{
		i = 0;
		n = 0;
		while (str[i])
		{
			s = str[i];
			if (s < '0' || (s > '9' && s < 'A') || (s > 'Z' && s < 'a'))
				i++;
			else
			{
				n = (n * ft_checklenght(base)) + (get_nb(str[i], base));
				i++;
			}
		}
		return (n * ft_checksign(str));
	}
	return (0);
}

/*int main(void)
{
	char str[] = "10000";
	char base[] = "01";
	ft_atoi_base(str, base);
	return (0);
}*/
