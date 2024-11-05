/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:30:20 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/05 00:31:15 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		idx;

	if (!src && !dst)
		return (NULL);
	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	if (ptr_dst > ptr_src)
	{
		while (len > 0)
		{
			ptr_dst[len] = ptr_src[len];
			len--;
		}
	}
	else
	{
		idx = 0;
		while (idx++ < len)
			ptr_dst[idx] = ptr_src[idx];
	}
	return (dst);
}

// int main()
// {
// 	// char str1[] = "abcde";
// 	// char *src1 = &str1[0];
// 	// char *dst1 = &str1[2];

// 	// char str2[] = "abcde";
// 	// char *src2 = &str2[0];
// 	// char *dst2 = &str2[2];

// // printf("O: return: %s, dest: %s\n", memmove(dst1, src1, 3), dst1);

// // printf("M: return: %s, dest: %s\n", ft_memmove(NULL, src2, 0), dst2);
// 	// char s1[] = "Hello, World!";
// 	// char s2[] = "Hello, World!";
// 	char *src = "this is a good nyancat !\r\n";
// 	char dst1[0xF0];
// 	char dst2[0xF0];
// 	int size = strlen(src);

// 	ft_memmove(dst2, src, size);
// 	printf("O: %s\n", memmove(dst1, src, size));
// 	printf("M: %s\n", ft_memmove(dst2, src, size));
// }
