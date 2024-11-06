/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:30:20 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 08:15:43 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		idx;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		idx = 0;
		while (idx < len)
		{
			((char *)dst)[idx] = ((char *)src)[idx];
			idx++;
		}
	}
	return (dst);
}
