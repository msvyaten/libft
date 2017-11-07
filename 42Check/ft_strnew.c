/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:20:50 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/05 15:42:39 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = ((char*)malloc(sizeof(*str) * (size + 1)));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (size + 1));
	return (str);
}
