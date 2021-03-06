/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:47:11 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/04 13:49:29 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
}
