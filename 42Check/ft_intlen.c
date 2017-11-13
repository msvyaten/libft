/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:38:47 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/09 15:38:54 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
