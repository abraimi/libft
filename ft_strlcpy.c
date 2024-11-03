/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 05:27:26 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 09:37:08 by abraimi          ###   ########.fr       */
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

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char *s1 = "Hello, World!";
// 	char *s1_dst = "";
// 	printf("O: %lu, %s\n", strlcpy(s1_dst, s1, 100), s1_dst);

// 	// char *s2 = "Hello, World!";
// 	// char *s2_dst = "";
// 	// printf("M: %lu, %s\n", ft_strlcpy(s2_dst, s2, 100), s2_dst);
// }