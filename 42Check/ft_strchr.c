/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:41:45 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 15:46:30 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	int len;
	int i;

	i = 0;
	len = (int)ft_strlen(str);
	if (c == 0)
		return ((char*)&str[len]);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
