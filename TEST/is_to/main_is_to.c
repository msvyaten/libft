/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:08:58 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/13 19:53:45 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> //atoi

int		ft_isdigit(int c);

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//int		ft_atoi(const char *str);

int		main(void)
{
	char c = 'A';
	//char *atoistr = "92233720368547758071";

	//printf("atoi: %d\n", atoi(atoistr));
	//printf("ft_atoi: %d\n", ft_atoi(atoistr));
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));	
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n", ft_isalnum(c));
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));
	printf("toupper: %d\n", toupper(c));
	printf("ft_toupper: %d\n", ft_toupper(c));
	printf("tolower: %d\n", tolower(c));
	printf("ft_tolower: %d\n", ft_tolower(c));

	return (0);
}
