/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:05:50 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 16:49:43 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				idx;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	idx = 0;
	while (idx < n && (p1[idx] || p2[idx]))
	{
		if (p1[idx] != p2[idx])
			return (p1[idx] - p2[idx]);
		idx++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// char	s1[] = "zzc";
// 	// // char	s2[] = "abcd";
// 	// size_t cmp = 1;
// 	// char *s1 = "";
// 	// char *s2 = "AAAAAA";
// 	// size_t size = 6;

// 	char *s1 = "abcdef";
// 	char *s2 = "abcdefghijklmnop";
// 	size_t size = 6;

// 	printf("O: %i\n", strncmp(s1, s2, size));
// 	printf("M: %i\n", ft_strncmp(s1, s2, size));
// }
