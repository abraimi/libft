/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:33:14 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 13:20:41 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			idx;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	idx = 0;
	while (idx < n)
	{
		if (ptr_s1[idx] != ptr_s2[idx])
			return (ptr_s1[idx] - ptr_s2[idx]);
		idx++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	// char s1[] = "abcd";
// 	// char s2[] = "abcf";
// 	// int size = 6;
// 	// printf("O: %d\n",memcmp(s1, s2, size));

// 	// char s3[] = "abcd";
// 	// char s4[] = "abcf";
// 	// printf("M: %d\n",ft_memcmp(s3, s4, size));
// 	char b1[] = "nyancat";

// 	ft_memcmp(((void *)0), b1, 4);
// }