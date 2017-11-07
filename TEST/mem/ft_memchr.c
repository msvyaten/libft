/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:38:30 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/02 16:04:22 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			chr;
	unsigned const char		*str;

	i = 0;
	chr = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == chr)
			return ((unsigned char*)str + i);
		i++;
	}
	return (NULL);
}
