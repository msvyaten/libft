/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 12:15:46 by msvyaten          #+#    #+#             */
/*   Updated: 2017/10/30 14:10:32 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *str, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)str)[i] = '\0';
		i++;
	}
}