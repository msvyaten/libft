/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:54:18 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/02 12:13:36 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dt;
	const char	*sc;

	i = 0;
	dt = dst;
	sc = src;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}
