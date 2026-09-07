/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 01:49:04 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/08 04:57:11 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	len = min(len, ft_strlen(s) - start + 1);
	if ((start >= ft_strlen(s)))
		return (malloc(0));
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, (s + start), len);
	*(res + len) = '\0';
	return (res);
}
