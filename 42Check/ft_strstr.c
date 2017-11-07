/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:18:07 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 18:02:14 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (needle[k] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + k] == needle[k])
		{
			if (needle[k + 1] == 0)
				return ((char*)(haystack + i));
			k++;
		}
		k = 0;
		i++;
	}
	return (NULL);
}
