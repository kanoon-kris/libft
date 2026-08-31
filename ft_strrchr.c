/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 23:18:23 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/01 00:11:27 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c_copy;
	char		*ptr_current;
	size_t		idx;

	idx = 0;
	ptr_current = NULL;
	c_copy = c;
	while (s[idx])
	{
		if ((unsigned char) s[idx] == c_copy)
			ptr_current = &s[idx];
		++idx;
	}
	if (s[idx] == c_copy)
		ptr_current = &s[idx];
	return (ptr_current);
}
