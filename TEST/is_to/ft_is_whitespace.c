/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:25:33 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/06 13:26:08 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\r' || c == '\v' || c == '\f');
}
