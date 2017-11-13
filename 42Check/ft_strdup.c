/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:07:02 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 15:45:34 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = (int)ft_strlen(src);
	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = ((char*)src)[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
