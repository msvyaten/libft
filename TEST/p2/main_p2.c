/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_p2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:51:31 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/04 12:51:34 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);

int		main(void)
{
	char	*str1 = "Kellok";
	char	*str2 = "Kello";
	int 	i = 3;
	printf("equ %d\n", ft_strnequ(str1, str2, i));	
	return (0);
}