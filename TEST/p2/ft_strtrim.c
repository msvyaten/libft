/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:24:59 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/08 13:25:01 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	i = 0;
	j = 0;
	str = (char*)s;
	if (!s)
		return (NULL);
	size = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i != size)
		while (s[size - 1] == ' ' || s[size - 1] == '\n' || \
			s[size - 1] == '\t')
			size--;
	if (!(str = (char*)malloc(sizeof(*str) * (size - i + 1))))
		return (NULL);
	while (i < size)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
