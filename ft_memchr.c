/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:04:24 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 09:42:27 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			idx;

	ptr_s = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		if (ptr_s[idx] == (unsigned char)c)
			return (&(ptr_s)[idx]);
		idx++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(){
// 	// char s1[] = "Hello, World!";
// 	// char s2[] = "Hello, World!";

// 	// printf("O: %s\n", memchr(s1, 'W', 130));
// 	printf("M: %s\n", ft_memchr(NULL, 'W', 130));
// }