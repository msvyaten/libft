/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:22:28 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/03 13:26:39 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int		ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\r' || c == '\v' || c == '\f');
}

int				ft_atoi(const char *str)
{
	size_t					i;
	int						flag;
	unsigned long long int	result;

	i = 0;
	flag = 1;
	result = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		if (result >= 9223372036854775807 && flag == 1)
			return (-1);
		else if (result > 9223372036854775807 && flag == -1)
			return (0);
		i++;
	}
	return ((int)(result * flag));
}
