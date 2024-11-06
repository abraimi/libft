/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:15:58 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 08:02:33 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				idx;

	if (src == NULL && dst == NULL)
		return (dst);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	idx = 0;
	while (idx < n)
	{
		ptr_dst[idx] = ptr_src[idx];
		idx++;
	}
	return (ptr_dst);
}
