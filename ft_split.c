/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:31:08 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/11 00:02:07 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c);
static void		real_split(char const *s, char c, char **buffer);

// 1. Determine size I should malloc.
// 2. memset those to '\0'.
// 3. strlcat those 's' delimitered by 'c' to each segment from (1.).
// 4. Write 'NULL' to the last element.
char	**ft_split(char const *s, char c)
{
	char	**res;

	res = calloc(word_count(s, c) + 1, sizeof(char *));
	real_split(s, c, res);
	return (res);
}

static void	real_split(char const *s, char c, char **buffer)
{
	const char	*s_begin;
	const char	*s_end;

	while (*s != '\0')
	{
		s_begin = s;
		s_end = ft_strchr(s_begin, c);
		if (s_end != NULL)
		{
			*(buffer) = ft_memcpy(*buffer, s_begin, (s_end - s_begin + 1));
			*(*(buffer) + (s_end - s_begin)) = '\0';
			++buffer;
			s += s_end - s_begin + 1;
		}
		++s;
	}
}

static size_t	word_count(char const *s, char c)
{
	unsigned char	word_entered;
	size_t			idx;
	size_t			count;

	count = 0;
	idx = 0;
	word_entered = 0;
	while (*(s + idx) != '\0')
	{
		if ((!word_entered) && (*(s + idx) != c))
		{
			word_entered = 1;
			++count;
		}
		else if ((!word_entered) && (*(s + idx) == c))
			;
		else if ((word_entered) && (*(s + idx) != c))
			;
		else if ((word_entered) && (*(s + idx) == c))
			word_entered = 0;
		++idx;
	}
	return (count);
}
#include <stdio.h>
int	main(void)
{
	char	text[] = " and is red. ";
	char	deli = ' ';

	printf("#word: %zu\n", word_count(text, deli));
	return (0);
}
