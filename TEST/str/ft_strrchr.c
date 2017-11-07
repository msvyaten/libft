/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:29:58 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 15:41:59 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int len;
	int i;

	len = (int)ft_strlen(str);
	i = len;
	if (c == 0)
		return ((char*)&str[i]);
	while (len-- > 0)
	{
		if (str[len] == c)
			return ((char*)str + len);
	}
	return (NULL);
}
