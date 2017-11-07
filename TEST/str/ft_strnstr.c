/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:40:55 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 18:42:20 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	if (needle[k] == 0)
		return ((char*)haystack);
	while (haystack[i] != 0 && i < len)
	{
		while (haystack[i + k] == needle[k])
		{
			if (needle[k + 1] == 0)
				return ((char*)(haystack + i));
			if ((i + k) >= len - 1)
				return (NULL);
			k++;
		}
		k = 0;
		i++;
	}
	return (NULL);
}
