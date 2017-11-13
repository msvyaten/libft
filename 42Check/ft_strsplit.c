/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:10:22 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/10 18:18:15 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	k;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		k = 0;
		while (*s == c)
			s++;
		if (!(str[i] = (char*)malloc(sizeof(char) * ft_countchars(s, c) + 1)))
		{
			free(str);
			return (NULL);
		}
		while (*s != c && *s != '\0')
			str[i][k++] = *s++;
		str[i++][k] = '\0';
	}
	str[i] = NULL;
	return (str);
}
