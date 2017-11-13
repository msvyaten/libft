/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:25:46 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/09 12:25:48 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	i = len - 1;
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
	if (n < 10 && n >= 0)
		str[i] = (n % 10) + '0';
	str[len] = '\0';
	return (str);
}
