/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:27:26 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/11 22:51:35 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (!dst || !dstsize)
		return (srcsize + dstsize);
	idx = 0;
	while (src[idx] != '\0' && idx < dstsize - 1)
	{
		*dst++ = src[idx];
		idx++;
	}
	*dst = '\0';
	return (srcsize);
}
