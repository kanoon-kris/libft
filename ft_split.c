/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:31:08 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/11 20:40:51 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	count_word(char const *s, char c);

//char	**ft_split(char const *s, char c)
//{
//	char		**res;
//	size_t		word_count;
//	const char	*ptr_end;
//	const char	*ptr_begin;
//	size_t		idx;
//
//	idx = 0;
//	word_count = count_word(s, c);
//	res = calloc(word_count + 1, sizeof(char *));
//	ptr_begin = s;
//	ptr_end = s;
//	while (*(ptr_begin) != '\0')
//	{
//		while ((*(ptr_end) != c) && (*(ptr_end) != '\0'))
//			++ptr_end;
//		*(res + idx) = calloc((ptr_end - ptr_begin + 1), sizeof(char));
//		ft_memcpy(*(res + idx), ptr_begin, ptr_end - ptr_begin);
//		*(*(res + idx) + (ptr_end - ptr_begin)) = '\0';
//		++idx;
//		++ptr_end;
//		ptr_begin = ptr_end;
//		if (*(ptr_begin) == '\0')
//			break ;
//	}
//	*(res + word_count) = NULL;
//	return (res);
//}
char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	idx_i;
	size_t	idx_j;
	size_t	start;
	char	**result;

	word_count = count_word(s, c);
	res = calloc((word_count + 1) * sizeof(char*));
	idx_j = 0;
	while (s[idx_j] != '\0')
	{
		while (s[idx_j] == c)
			++idx_j;
		if (s[idx_j] == '\0')
			break ;
	}
}

static size_t	count_word(char const *s, char c)
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
//int	main(void)
//{
//	char	**res;
//	size_t	idx = 7;
//
//	res = ft_split("hello world 42 67 69 911 711", ' ');
//	while (idx--)
//		printf("%s\n", *(res++));
//	return (0);
//}
