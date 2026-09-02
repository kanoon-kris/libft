/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 05:15:45 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/03 05:22:17 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_pt;
	size_t	len;
	size_t	idx;

	idx = 0;
	len = ft_strlen(s);
	str_pt = malloc(sizeof(char) * len + 1);
	if (str_pt == NULL)
		return (NULL);
	while (idx < len)
	{
		*(str_pt + idx) = *(s + idx);
		++idx;
	}
	return (str_pt);
}
