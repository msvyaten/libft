/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:41:59 by msvyaten          #+#    #+#             */
/*   Updated: 2017/11/01 17:57:49 by msvyaten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
char	*ft_strstr(const char *str, const char *src);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		main(void)
{
	char str[50] = "0123";
	char strr[50] = "0123";
	char dest[40];
	char src[] = "qwerty";
	char srcc[] = "qwerty";
	int c = '3';
	char cmp[50] = "0123453";
	size_t len = 6;
/*
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %lu\n", ft_strlen(str));
	printf("strcpy: %s\n", strcpy(dest, str));
	printf("ft_strcpy: %s\n", ft_strcpy(dest, str));
	printf("strncpy: %s\n", strncpy(dest, str, len));
	printf("ft_strncpy: %s\n", ft_strncpy(dest, str, len));
	printf("strdup: %s\n", strdup(str));
	printf("strcat: %s\n", strcat(str, src));
	printf("ft_strcat: %s\n", ft_strcat(str, src));	
	printf("strchr: %s\n", strchr(str, c));
	printf("ft_strchr: %s\n", ft_strchr(str, c));
	printf("strrchr: %s\n", strrchr(str, c));
	printf("ft_strrchr: %s\n", ft_strrchr(str, c));
	printf("strncat: %s\n", strncat(str, src, len));
	printf("ft_strncat: %s\n", ft_strncat(str, src, len));
	printf("strlcat: %lu\n", strlcat(str, src, 8));
	printf("ft_strlcat: %lu\n", ft_strlcat(str, src));	
	printf("strcmp: %d\n", strcmp(str, cmp));
	printf("ft_strcmp: %d\n", ft_strcmp(str, cmp));
	printf("strncmp: %d\n", strncmp(str, cmp, len));
	printf("ft_strncmp: %d\n", ft_strncmp(str, cmp, len));
	printf("ft_strstr: %s\n", ft_strstr("Hello world", "world"));
	printf("strstr: %s\n", strstr("Hello world", "world"));
	printf("ft_strnstr: %s\n", ft_strnstr("Hello world", "dfghj", 10));
	printf("strnstr: %s\n", strnstr("Hello world", "dfghj", 10));
*/
	printf("str origin: %s\n", str);
	printf("strlcat: %lu\n", strlcat(str, src, len));
	printf("str strlcat: %s\n", str);
	printf("strR origin: %s\n", strr);
	printf("ft_strlcat: %lu\n", ft_strlcat(strr, srcc, len));
	printf("strR ft: %s\n", strr);	
	return (0);
}
