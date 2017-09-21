/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:01:52 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/21 15:13:20 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

static void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static void	putstrln(char *str)
{
	putstr(str);
	write(1, "\n", 1);
}

static void	show(char *varname, void *var, size_t bytes)
{
	unsigned	i;
	char		*str;

	str = (char *)var;
	putstr(varname);
	write(1, " = \"", 4);
	i = 0;
	while (i < bytes)
	{
		if (str[i])
			write(1, str + i, 1);
		else
			write(1, ".", 1);
		++i;
	}
	write(1, "\"\n", 2);
}

static void	plus2(char *c)
{
	*c += 2;
}

int			main(void)
{
	char	*mem;
	char	*src;

	src[0] = 'a';
	src[1] = 'p';
	src[2] = 'p';
	src[3] = 'l';
	src[4] = 'e';
	putstrln("\n** ft_memset **\n");
	mem = (char *)malloc(7);
	putstrln("mem is 7 bytes..");
	show("mem", mem, 7);
	putstrln("Calling ft_memset(mem, 'a', 7)");
	ft_memset(mem, 'a', 7);
	show("mem", mem, 7);
	putstrln("Calling ft_memset(str, 'z', 3)");
	ft_memset(mem, 'z', 3);
	show("mem", mem, 7);
	printf("\n** ft_isalpha **\n\n");
	printf("ft_isalpha('a') = %i\n", ft_isalpha('a'));
	printf("ft_isalpha('1') = %i\n", ft_isalpha('1'));
	printf("ft_isalpha('\\0') = %i\n", ft_isalpha('\0'));
	putstrln("\n** ft_bzero **\n");
	show("mem", mem, 7);
	putstrln("Calling ft_bzero(str, 2)");
	ft_bzero(mem, 2);
	show("mem", mem, 7);
	putstrln("Calling ft_bzero(str, 7)");
	ft_bzero(mem, 7);
	show("mem", mem, 7);
	putstrln("\n** ft_memcpy **\n");
	show("mem", mem, 7);
	show("str", src, 5);
	putstrln("Calling ft_memcpy(mem, src, 5)");
	ft_memcpy(mem, src, 5);
	show("mem", mem, 7);
	memset(mem, 0, 7);
	putstrln("\n** ft_memccpy **\n");
	show("mem", mem, 7);
	show("str", src, 5);
	putstrln("Calling ft_memccpy(mem, src, 5)");
	ft_memccpy(mem, src, 'l', 5);
	show("mem", mem, 7);
	memset(mem, 0, 7);
	putstrln("\n** ft_memmov **\n");
	show("mem", mem, 7);
	show("str", src, 5);
	putstrln("Calling ft_memmov(mem, src, 5)");
	ft_memmove(mem, src, 5);
	show("mem", mem, 7);
	ft_striter(mem, plus2);
	show("mem", mem, 5);
	return (0);
}
