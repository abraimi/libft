/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:15:58 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/04 08:28:45 by abraimi          ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// char o_src[] = "Hello, World!";
// 	// char o_dst[10];
// 	// printf("O: %s\n", memcpy(o_dst, o_src, 10));

// 	// char m_src[] = "Hello, World!";
// 	// char m_dst[10];
// 	// printf("M: %s\n", ft_memcpy(m_dst, m_src, 10));

// 	//! Overlap
// 	// char s1[] = "Hello, World!";
// 	// char s2[] = "Hello, World!";
// 	// printf("O: %s\n", memcpy(&s1[2], &s1[0], 10));
// 	// printf("M: %s\n", ft_memcpy(&s2[2], &s2[0], 10));

// }
