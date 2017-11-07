/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:34:28 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/03 11:14:35 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *str, size_t len);
void	*ft_memset(void *dest, int c, size_t len);
void	*ft_memcpy(void *dst, const void  *src, size_t n);
void	*ft_memccpy(void *dst, const void  *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

int		main()
{
	char str[18] = "kfg67890";
	char strm[18] = "k44sjfk fj";
	char strn[18] = "k44sjfk fj";
	char src[12] = "";
	char cpy[20] = "1234567qwertyuiop";
	char srcc[12] = "";
	char ccpy[20] = "1234567qwertyuiop";
	char srcm[12] = "999";
	char cmp[20] = "1234567qwertyuiop";;
	char ccmp[20] = "1234567qwertyuiop";;
	size_t len = 9;
	int chr = '5';

/*
	printf("dest: %s\n", str); 
	printf("bzero: %s\n", bzero(str, len)); //fill array '\0'
	ft_bzero(str, len);
	printf("ft_bzero: %s\n", str);
	printf("memset: %s\n", memset(strm, chr, len));
	printf("ft_memset: %s\n", ft_memset(strn, chr, len)); //fill first n symbols in array with symbol in the middle
	printf("memccpy: %s\n", memccpy(src, cpy, chr, len));
	printf("src: %s\n", src);
	printf("ft_memccpy: %s\n", ft_memccpy(srcc, ccpy, chr, len));
	printf("src: %s\n", src);
	printf("memcpy: %s\n", memcpy(src, cpy, len));
	printf("ft_memcpy: %s\n", ft_memcpy(src, cpy, len));
	printf("memmove: %s\n", memmove(srcm, cpy, len));
	printf("memchr: %s\n", memchr(cpy, chr, len));
	printf("ft_memchr: %s\n", ft_memchr(cpy, chr, len));
	printf("memcmp: %d\n", memcmp(cpy, ccpy, len));
	printf("ft_memcmp: %d\n", ft_memcmp(cmp, ccmp, len));
*/
	printf("memmove: %s\n", memmove(cpy + 5, cpy, 5));
	printf("ft_memmove: %s\n", ft_memmove(cmp + 5, cmp, 5));
	return (0);
}
