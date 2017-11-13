/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:49:11 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/06 17:56:45 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == 0)
		ft_putchar('0');
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n < 0 && n > -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n > 0 && n < 10)
		ft_putchar(n % 10 + '0');
}
