/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:06:26 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/28 14:51:59 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < nb)
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dest);
}

/*int main(void)
  {
  unsigned int nb = 3;
  char dest[100]= "perro";
  char src[]= "gato";

  printf("%d",ft_strncat(dest, src));
  return(0);
  }*/
