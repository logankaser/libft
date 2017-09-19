/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:01:52 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/18 19:27:23 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	str_is(char * s, size_t b)
{
	write(1, "str = \"", 7);
	write(1, s, b);
	write(1, "\"\n", 2);
}

int	main(void)
{
	char *str = 0;
	char *src = "apple";
	printf("\n** ft_memset **\n\n");
	printf("str is 8 byte string..\n");
	str = (char *)malloc(8);
	str[7] = '\0';
	printf("Calling ft_memset(str, 'a', 7)\n");
	ft_memset(str, 'a', 7);
	printf("str = \"%s\"\n", str);
	printf("Calling ft_memset(str, 'z', 3)\n");
	ft_memset(str, 'z', 3);
	printf("str = \"%s\"\n", str);

	printf("\n** ft_isalpha **\n\n");
	printf("ft_isalpha('a') = %i\n", ft_isalpha("aaa"));
	printf("ft_isalpha(\"BBB\") = %i\n", ft_isalpha("BBB"));
	printf("ft_isalpha('1') = %i\n", ft_isalpha("1"));
	printf("ft_isalpha('') = %i\n", ft_isalpha(""));
	printf("ft_isalpha(\"123\") = %i\n", ft_isalpha("123"));

	printf("\n** ft_bzero **\n\n");
	str_is(str, 7);
	printf("Calling ft_bzero(str, 2)\n");
	ft_bzero(str, 2);
	str_is(str, 7);
	printf("Calling ft_bzero(str, 7)\n");
	ft_bzero(str, 7);
	str_is(str, 7);
	
	printf("\n** ft_memcpy **\n\n");
	printf("src = \"apple\"\n");
	str_is(str, 7);
	printf("Calling ft_memcpy(str, src, 5)");
	ft_memcpy(str, src, 5);
	str_is(str, 7);
	return (0);
}
