/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:29:51 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/02 14:26:05 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	const char		*sc;
	unsigned char	chr;

	i = 0;
	dt = dst;
	sc = src;
	chr = (unsigned char)c;
	while (i < n)
	{
		dt[i] = sc[i];
		if (chr == dt[i])
			return (dt + i + 1);
		i++;
	}
	return (NULL);
}
