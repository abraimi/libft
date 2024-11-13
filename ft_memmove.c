/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:30:20 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/13 05:34:45 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		idx;

	if (src == dst)
		return (dst);
	if (dst > src)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((const char *)src)[len];
	}
	else
	{
		idx = 0;
		while (idx < len)
		{
			((char *)dst)[idx] = ((const char *)src)[idx];
			idx++;
		}
	}
	return (dst);
}
