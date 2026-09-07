/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboonkos <kboonkos@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 20:44:23 by kboonkos          #+#    #+#             */
/*   Updated: 2026/09/08 03:41:03 by kboonkos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

//char	*ft_strnstr(const char *big, const char *little, size_t len)
//{
//}
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	size_t	idx_inner;

	if (*little == '\0')
		return ((char *)(big));
	idx_inner = 0;
	idx = 0;
	while (idx < len)
	{
		idx_inner = 0;
		while ((*(big + idx + idx_inner) == *(little + idx_inner))
			&& (*(little + idx_inner) != '\0')
			&& ((idx + idx_inner) < len))
			++idx_inner;
		if (*(little + idx_inner) == '\0')
			return ((char *)(big + idx));
		++idx;
	}
	return (NULL);
}
//int	main(void)
//{
//	printf("START\n");
//	printf("%s\n", ft_strnstr("Hellow World", "World", 10));
//	return (0);
//}
