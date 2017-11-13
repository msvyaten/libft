/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:43:10 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/07 12:45:54 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
