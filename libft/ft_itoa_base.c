/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 10:48:08 by exam              #+#    #+#             */
/*   Updated: 2016/09/11 14:29:35 by gboudrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(int value, int base)
{
	int					size;
	unsigned int		nb;
	char				*str;

	size = 1;
	if (base == 10 && value < 0 && size++ >= 0)
		nb = value * (- 1);
	else
		nb = value;
	while ((value >= base || value <= base * (-1)) && size++ >= 0)
		value = value / base;
	if ((str = malloc(size)) == NULL)
		return (NULL);
	str[size--] = '\0';
	if (base == 10 && value < 0)
		str[0] = '-';
	while (str[size] != '-' && size-- >= 0)
	{
		if (nb % base > 9)
			str[size + 1] = nb % base - 10 + 'A';
		else
			str[size + 1] = nb % base + '0';
		nb = nb / base;
	}
	return (str);
}
