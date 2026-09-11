/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:31:08 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/12 00:19:06 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	free_result(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		++i;
	}
	free(result);
}

char	**ft_split(const char *s, char c)
{
	size_t	word_count;
	char	**result;
	size_t	inner_index;
	size_t	start_word;
	size_t	index;

	word_count = count_word(s, c);
	result = calloc((word_count + 1), sizeof(char *));
	if (!result)
		return (NULL);
	inner_index = 0;
	index = 0;
	while (s[inner_index] != '\0')
	{
		while (s[inner_index] == c)
			++inner_index;
		if (s[inner_index] == '\0')
			break ;
		start_word = inner_index;
		while ((s[inner_index] != '\0') && (s[inner_index] != c))
			++inner_index;
		result[index] = malloc(((inner_index - start_word) + 1)
			* sizeof(char));
		if (!result[index])
		{
			free_result(result, index);
			return (NULL);
		}
		ft_memcpy(result[index], (s + start_word),
			(inner_index - start_word));
		result[index][inner_index - start_word] = '\0';
		++index;
	}
	result[index] = NULL;
	return (result);
}
