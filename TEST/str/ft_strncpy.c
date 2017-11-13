/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:24:52 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 15:42:54 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *start;

	start = dst;
	while (len > 0 && *src)
	{
		*(dst++) = *(src++);
		len--;
	}
	while (len-- > 0)
		*(dst++) = '\0';
	return (start);
}
