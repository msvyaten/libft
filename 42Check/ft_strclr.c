/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:19:02 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/04 17:59:27 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	size_t len;

	if (!s)
		return ;
	len = ft_strlen(s);
	while (len-- > 0)
		s[len] = '\0';
}
