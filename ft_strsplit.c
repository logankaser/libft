/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:30:04 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/21 12:17:54 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		word_size(const char *chr, char d)
{
	int size;

	size = 0;
	while (*chr && *chr != d)
	{
		++size;
		++chr;
	}
	return (size);
}

static size_t	num_words(const char *str, char d)
{
	size_t num;

	num = 0;
	while (*str)
	{
		if (*str != d && (*(str + 1) == d || *(str + 1) == '\0'))
			++num;
		++str;
	}
	return (num);
}

char			**ft_strsplit(const char *str, const char d)
{
	char		**split_words;
	size_t		size;
	unsigned	w;
	int			c;

	size = num_words(str, d) + 1;
	split_words = (char **)malloc(sizeof(char*) * size);
	if (!split_words)
		return (NULL);
	w = 0;
	while (w < size)
	{
		while (*str == d)
			++str;
		c = word_size(str, d);
		split_words[w] = (char *)malloc(c);
		if (!split_words[w])
			return (NULL);
		split_words[w][--c] = '\0';
		while (c >= 0)
			split_words[w][c++] = *str++;
		++w;
	}
	split_words[size - 1] = 0;
	return (split_words);
}
