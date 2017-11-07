/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:31:27 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/03 14:33:16 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*sc;

	dest = dst;
	sc = src;
	i = 0;
	if (dest < sc)
	{
		while (i < len)
		{
			dest[i] = sc[i];
			i++;
		}
	}
	else if (dest > sc)
	{
		while (len-- > 0)
			dest[len] = sc[len];
	}
	return (dest);
}
